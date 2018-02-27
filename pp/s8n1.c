#include<math.h>
#include<stdio.h>
#include<stdlib.h>

// THE SIEVE OF SUNDARAM

int sieve(const int N){
 
  char S[N+1];
  for (int i=0; i<N;i++){ S[i]=0; }

  int i, j , m;
  
  for (j=1; j<=N+1; j++){

	



  }

  



/*
  int i, j, m;
  
  do {
    for (i=1; i<=j; i++){
	int n=i+j+2*i*j;
      if (n<=N){}
      else {
	 int m=1;
         n=n*2+1;
	 printf("n_%d = %d\n", m, n);
	 m++;
      }

    }

  }
  while (j<=N);
*/

}


int main(){

  int N;
  printf("Hey kid. Enter N. Imma give ya primes up to 2N+2... except 2. Number: ");
  scanf("%d", &N);
  sieve(N);

}

