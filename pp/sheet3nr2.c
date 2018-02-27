#include<stdio.h>
#include<math.h>

int main(void)
{

  int a,b;
  printf("Please enter a and b: ");
  scanf("%d %d", &a, &b);
  printf("a=%d, b=%d\n", a, b);

  // i) Swap a & b using a variable c
  int c;
  c=a;
  a=b;
  b=c;
  printf("a=%d, b=%d\n", a, b);

  // ii) Addition/subtraction/assignment
  a=a+b;
  b=a-b;
  a=a-b;
  printf("a=%d, b=%d\n", a, b);
 
  // iii) Multiplication
  a=a*b;
  b=a/b;
  a=a/b;
  printf("a=%d, b=%d\n", a, b);

  // iiii) XOR algrotihm
  a=a^b;
  b=a^b;
  a=a^b;
  printf("a=%d, b=%d\n", a, b);   

}
