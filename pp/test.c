#include<stdio.h>
#include<stdlib.h>

int array(void *p, int size){
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

