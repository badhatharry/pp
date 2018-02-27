#include<stdio.h>
#include<stdlib.h>


// EX.1: RECURSION


unsigned int recursion_uint(unsigned int N){
  
  if (N == 0)
  {
	return 1;
  }

  return N*recursion_uint(N-1);

  if (N < 1)
  {
	return 0;
  }

}


unsigned long int recursion_ulint(unsigned long int N){
  
  if (N == 0)
  {
	return 1;
  }

  return N*recursion_ulint(N-1);

  if (N < 1)
  {
	return 0;
  }

}


unsigned long int binomial_fac(const unsigned long int n, const unsigned long int k){

  return recursion_ulint(n)/(recursion_ulint(k)*recursion_ulint(n-k));  

}


unsigned long int binomial_mul(unsigned long int n, unsigned long int k){

  unsigned long int B = 1;
  
  if (k == 0) 
  {
	return 1;
  }  

  if (2*k > n) 
  {
	k = n-k;
  }

  for (unsigned long int j = 1; j <= k; j++)
  {
       B *= (n+1-j)/j;
  }

  return B;

}



int main(){
  
  unsigned int N;
  unsigned long int M;
  unsigned int L;

/*
  printf("Enter N (unsigned int): \n");
  scanf("%d", &N);
  
  printf("Enter M (unsigned long int): \n");
  scanf("%lu", &M);
 
  printf("N!(u.int) = %u\n", recursion_uint(N));
  printf("M!(u.l.int) = %lu\n", recursion_ulint(M));
*/
  
  printf("Enter N (unsigned l. int): \n");
  scanf("%d", &N);

  printf("Enter L (unsigned l. int): \n");
  scanf("%d", &L);

  printf("(n  k) = %lu\n", binomial_mul(N, L));
 
  return 0;
}

