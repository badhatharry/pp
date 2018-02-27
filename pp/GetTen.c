#include<stdio.h>

int n=10; // n had to be made a global variable... why tho...?

// Probably because within GetTen, stuff happened that did not concern 
// anything outside the function. 

int *GetTen(void){ n; return &n; }

int main(void){

  int* Np=GetTen();
  printf("Ten from function is %d\n", *Np);

}

