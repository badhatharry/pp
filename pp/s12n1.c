#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TYPE int
#define TYPE_DEFAULT 0

struct Vector {
  unsigned int size;
  unsigned int capacity;
  TYPE *vector;
};

typedef struct Vector VECTOR;

VECTOR createVector(const unsigned int numberOfElements, const TYPE value){ 
  
  VECTOR V;

  V.capacity = (numberOfElements==0) ? 2 : (unsigned int)pow(2, ceil(log(numberOfElements)/log(2))); 
 
  /*
     if(numberOfElements == 0) {
     capacity = 2;
     } else {
     capacity = (unsigned int)pow(2, ceil(log(numberOfElements)/log(2)));
     }
  */ 

  V.vector = (TYPE *)malloc(V.capacity*sizeof(TYPE));
  if(V.vector == NULL){
    printf("ERROR: malloc failed! Aborting...\n");
    exit(2);
  }

  V.size = numberOfElements;
  for(unsigned int i=0; i<numberOfElements; i++)
    V.vector[i] = value;

  return V;
}

void destroyVector(VECTOR *destroyThis){
    free((*destroyThis).vector);
    (*destroyThis).size = (*destroyThis).capacity = 0;
    (*destroyThis).vector = NULL;        
}

TYPE at(VECTOR* V, const unsigned int index){

    if(index >= V.size){
        printf("ERROR: \"at\" function trying to access out of bounds! Aborting...\n");
      //  destroyVector();
        exit(2);
    } else
        return V.vector[index];
}

void pushBack(const TYPE value){
    VECTOR V;
    if(V.size == V.capacity){
        V.capacity*=2;
        TYPE* newVector = (TYPE *)realloc(V.vector, V.capacity*sizeof(TYPE));
        if(newVector == NULL){
            printf("ERROR: realloc failed! Aborting...\n");
            free(V.vector);
            exit(2);
        } else
            V.vector = V.newVector;
    }
    V.vector[V.size++] = value;
}

void popBack(void){
    if(V.size > 0)
        V.vector[--V.size] = TYPE_DEFAULT; //or just --size
}



int main(int argc, char *argv[]){
    
    //First test
    VECTOR = createVector(11,-7);
    printf("\n The capacity of the vector is %u\n\n", capacity);
    for(unsigned int i=0; i<size; i++)
        printf(" vector[%2u] = %d = %d\n", i, vector[i], at(i));
    printf("\n");
    destroyVector();

    //Second test
    createVector(0,-7);
    printf(" vector size = %2u, vector capacity = %2u\n", size, capacity);
    for(unsigned int i=0; i<40; i++){
        pushBack(i);
        printf(" vector size = %2u, vector capacity = %2u     vector[%2u] = %d\n", size, capacity, i, vector[i]);
    }
    printf("\n");

    //Not explicitly asked in the sheet
    for(unsigned int i=0; i<20; i++)
        popBack();
    printf(" vector size = %2u, vector capacity = %2u\n\n", size, capacity);

    //To trigger an out of bounds error
    //at(size);

    destroyVector();
}




/***********

Exercise 2: Exam like questions
===============================


(i)	Array is a list, a pointer to the first element. Unbroken line of elements in memory ("chain"), 
	with the name being a constant pointer to the first element. 
	Number of elements is constant (determinded in definition). Value of array
	name is the adress of the first element.

(ii)	sizeof(type) * N is the size of array. N is a const unsigned int or const int or int and given 
	to a function which in its header contains const (unsigned) int.
	But: better to go for 
	int N;
	int* a;
	a = malloc(N*sizeof(type);

(iii)	

int main(){

  char a[] = "Hello";
  char a[] = {'H','e','l','l','o','\0'};
  char a[] = {'H','e','l','l','o','\0', 'a'}; will only print up to the terminator


  char a[6] = ...; char a[N];
  char* a; a = (char *)malloc(5*sizeof(char));

  char s[6];
  s[0]='H';
  s[1]='e';
  s[2]='l';
  ...
  s[6]='\0';

  however: when then writing another array, it overwrites the s[6], lengthening the string (weird)

  what will not work is:
  char s[5];
  ...
  s[5]=...; ... not the null terminator. Stack Smashing!  

  char a[6];
  n = sizeof(a)/sizeof(a[0]);
  scanf("%s", a);

  Printing array size:
  char s[6];
  printf("%ld\n", sizeof(s));
  stringlength function
  forloop, stop at null terminator

}

(iv)	Memory is automatically freed when leaving the scope. 
	Memory can be manually free with the free() function, but it can only free memory 
	allocated with malloc. 
	Dynamic memory functions are (*type)malloc(pointer, space_need), realloc(), free(pointer), ....

(v)	(a)(f)	Technically possible, compiler will give an error
	(b)(f)	False. Arrays are defined with a certain type; all elements then are of that type
	(c)(f)	False. An array index is always an (unsigned!) integer.
	(d)(t)	The array element can be modified using pointers when passing it, but not in the form a[i]
	(e)(f)	Will not compile
	(f)(f)	Compiler puts zeroes (in standard)

(vi)	

#include<stdio.h>
#include<stdlib.h>

int array(void *p, const int size){
  int *par = (int *)p;
  int sum = 0;
  for (int i = 0; i < size; i++)
  {
	sum += par[i];
  }
  return sum;
}

int main(){
  const int size = 5;
  int p[size] = {1, 2, 3, 4};
  printf("Sum of array elements: S = %d\n", array(p, size));
}


*/

