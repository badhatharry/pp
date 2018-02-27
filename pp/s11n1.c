#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// ARRAYS AND DYNAMIC MEMORY ALLOCATION

// declaration of global variables

  int capacity = 0.;
  int size = 0.;
  double* vector = NULL;

// functions

void createVector(const unsigned int numberOfElements, const double value){
  
  int n;    // n is the smallest power of two greater than numberOfElements

  for (int i; ;i++)
  {
	if (pow(2, i) >= numberOfElements) { break; }
	n = i+1;
  }

  capacity = pow(2, n);
  printf("capacity = %d\n", capacity);

  vector = (double*)malloc(capacity*sizeof(double));
  size = numberOfElements;

  if (vector == NULL)
  {
	printf("Error! Memory could not be allocated.\n");
	exit(0);
  }

  for (int i = 0; i <= size; i++)
  {
	vector[i] = value;
	printf("vector[%d] = %lf\n", i, vector[i]);
  }  
}


void destroyVector(){

  free(vector);
  vector = NULL;
}


// only add one element! Give to this function the value to be added

void ushBack(const double value){

  ++size;
  
  if (capacity <= size) { capacity *= 2; }
  vector = (double *)realloc((void*)vector, (capacity)*sizeof(double));  
  
  if ((vector = (double *)realloc((void*)vector, (capacity)*sizeof(double))) == NULL)
  {
	printf("Error! Memory could not be reallocated.\n");
	exit(0);
  }

  vector[size-1] = value;
  for (int i = 0; i <= size; i++) { printf("vector[%d] = %lf\n", i, vector[i]); }  

}



void pushBack(const unsigned int numberOfElements, const double value  , const int m ){

//  size += 1;

  int n = numberOfElements;
  createVector(numberOfElements, value);
  vector = (double *)realloc((void*)vector, (n+m)*sizeof(double));

  if ((vector = (double *)realloc((void*)vector, (capacity)*sizeof(double))) == NULL)
  {
	printf("Error! Memory could not be reallocated.\n");
	exit(0);
  }

  n += m;

  for (int i = 0; i <= size; i++)
  {
	vector[i] = value;
	printf("vector[%d] = %lf\n", i, vector[i]);
  }
 
}


void popBack(const unsigned int numberOfElements, const double value, const int m){

  int n = numberOfElements;
  createVector(numberOfElements, value);
  vector = (double *)realloc((void*)vector, (n-m)*sizeof(double));

  if ((vector = (double *)realloc((void*)vector, (n-m)*sizeof(double))) == NULL)
  {
	printf("Error! Memory could not be reallocated.\n");
	exit(0);
  }

  n -= m;

  for (int i = 0; i <= n; i++)
  {
	vector[i] = value;
	printf("vector[%d] = %lf\n", i, vector[i]);
  }
 
}


//


int main(){

  createVector(17, 8.);

  ushBack(3.4);

  //popBack(17, 8., );


//  free(vector); 
//  createVector(0, 8.);

// Time to test: should the loop index be the value or the number of elements?
// What is the actual point of the task?

  for(int i = 1; i <= 40; i++)
  {
	
  }


  return 0;
}



/*

EXAM-LIKE QUESTIONS
===================

(i)	A pointer is a variable that stores an adress. The type in the definition
	determines which data type it is pointing to.

(ii) 	A pointer can be initialized to NULL, as an adress or as another pointer. With the content 
	operator * (got this one wrong) one can get the variable that is being
	pointed to.

(iii)	const double x, double* x, const double* x, (points to const double), double* const x (pointer 
	points always to the same place)

(iv)	equality of pointers, add/substract numbers from pointers to move places in memory forward
	or backward. +1, -1

(v)	pointers have to point to the same type to be assigned to each other (except for a void which can
	be assigned to anything).. Pointer to void is a 
	generic pointer able to point to any type. Cannot be dereferenced. No pointer arithmetic.
	use case (example): 

	int a=10;
	char b='x';
	void *p ......

(vi)	function pointer stores adress of the function, that can be called through that pointer
	It is dereferenced to the function itself.

(vii)	void someFunction(int(*someOtherFunction)(int,int)){}

(Viii)	(a) One cannot print NULL, which is what the pointer is being dereferenced to. Gives an error.
	(b) number is an int, zPtr is a pointer. int & pointer cannot be assigned to each other 
	    (int and memory adress).
	(c) zPtr points to z; number = zPtr[2] would be OK, however with the star tries to dereference the
	    third element (which is just a number), which doesn't work.
	(d) Get rid of equal sign, then it's OK, otherwise for loop goes on for longer than array is long
	(e) *sPtr is trying to dereference a void pointer -> does not work
	(f) ++z; will not work; z has to be dereferenced first 
	    (z is an array! ++pointer is ok but ++arrayName is not!)


*********************************

	a[i] = *(a+i)
	a[0] = *(a+0) = *a
	a[10]=10[a]






*/





