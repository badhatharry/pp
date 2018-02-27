#include<math.h> 
#include<stdio.h> 
#include<stdlib.h>

void setcontent(int* Np){ *Np=17; }

void SetToTen(int n){ n=10; }        // crap, doesn't do what it should
// setting n to ten and not returning it doesn't matter to the main function
// n is only locally defined)

void SetToTenPtr(int *n){ *n=10; }  // good boy!

int main(void){

  int N=101;
  int* Np=&N; //N-Zeiger

  setcontent(&N); // Task 2iv)
  
  // Tasks 2i), 2ii)
  printf("N:                    %d\n", N);
  printf("Adress of N:          %p\n", &N);
  printf("Np:                   %p\n", Np);
  printf("Adress Np:            %p\n", &Np);
  printf("Np points to:         %d\n", *Np);

  printf("\n\n");  

  // Tasks 2v), 2vi)
  printf("All cool, N=%d\n", N);
  printf("N:   %d\n", N);
  printf("*Np: %d\n", *Np);

    SetToTen(N);
  printf("Call SetToTen(N)\n");
  printf("N:   %d\n", N);
  printf("*Np: %d\n", *Np);

    SetToTen(*Np);
  printf("Call SetToTen(Np)\n");
  printf("N:   %d\n", N);    
  printf("*Np: %d\n", *Np);  

  N=20;

  printf("All cool, N=%d\n", N);
  printf("N:   %d\n", N);
  printf("*Np: %d\n", *Np);

    SetToTenPtr(&N);
  printf("Call SetToTenPtr(N)\n");
  printf("N:   %d\n", N);
  printf("*Np: %d\n", *Np);
 
    SetToTenPtr(Np);
  printf("Call SetToTenPtr(Np)\n");  
  printf("N:   %d\n", N);
  printf("*Np: %d\n", *Np);


}

