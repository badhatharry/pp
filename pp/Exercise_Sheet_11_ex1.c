#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TYPE int
#define TYPE_DEFAULT 0

unsigned int size = 0;
unsigned int capacity = 0;
TYPE *vector = NULL;

void createVector(const unsigned int numberOfElements, const TYPE value){ 
  capacity = (numberOfElements==0) ? 2 : (unsigned int)pow(2, ceil(log(numberOfElements)/log(2))); 
  /*
     if(numberOfElements == 0) {
     capacity = 2;
     } else {
     capacity = (unsigned int)pow(2, ceil(log(numberOfElements)/log(2)));
     }
   */ 
  vector = (TYPE *)malloc(capacity*sizeof(TYPE));
  if(vector == NULL){
    printf("ERROR: malloc failed! Aborting...\n");
    exit(2);
  }
  size = numberOfElements;
  for(unsigned int i=0; i<numberOfElements; i++)
    vector[i] = value;
}

void destroyVector(void){
    free(vector);
    size = capacity = 0;
    vector = NULL;        
}

TYPE at(const unsigned int index){
    if(index>=size){
        printf("ERROR: \"at\" function trying to access out of bounds! Aborting...\n");
        destroyVector();
        exit(2);
    } else
        return vector[index];
}

void pushBack(const TYPE value){
    if(size == capacity){
        capacity*=2;
        TYPE* newVector = (TYPE *)realloc(vector, capacity*sizeof(TYPE));
        if(newVector == NULL){
            printf("ERROR: realloc failed! Aborting...\n");
            free(vector);
            exit(2);
        } else
            vector = newVector;
    }
    vector[size++] = value;
}

void popBack(void){
    if(size > 0)
        vector[--size] = TYPE_DEFAULT; //or just --size
}



int main(int argc, char *argv[]){
    //First test
    createVector(11,-7);
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
