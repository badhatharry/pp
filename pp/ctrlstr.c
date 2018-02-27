#include<stdio.h>

int main(void)
{
	double x;
	int sign_x;
	printf("Choose x: ");
	scanf("%lf", &x);

	if(x>0.0)
	 sign_x=+1;
	if(x==0.0)
	 sign_x=0;
	if(x<0.0)
	 sign_x=-1;

	if(x==0)
	 printf("x is zero. ");
	else
	 printf("x is non-zero. ");

	printf("x=%f -> sign_x=%d\n", x, sign_x);
}
