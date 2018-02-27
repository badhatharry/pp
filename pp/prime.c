#include<stdlib.h>
#include<math.h>
#include<stdio.h>
#include<stdbool.h>
#include<iostream>

// Prime check

bool isprime(int input) {

  for (int a=2; a<=sqrt(input); ++a) {

	if(input%a==0)
	  return false;	  
 	}
  return true;
}

// Prime decomposition

void decomp(int input) {
  
  int b=input-1; 
  int count=0;
  
  for(b; b>=2; b--) {
	count=0;
	if (isprime(b)) {
		while (input%b==0){
		count++;
		input=input/b;
		}
	}
  if (count!=0){
	printf("%d^%d ", b, count);
  }
  }

}

// Actual program

int main(void) {

  int input;
  printf("\nEnter a natural number: \n");
  scanf("%d", &input);
  
  if (isprime(input))
	printf("The input is a prime.\n");
  else {
	printf("The input is not a prime, but here is the prime decomposition:\n");
	decomp(input);
	printf("\n\n");
	}
}

