#include<stdio.h>
#include<stdlib.h>

//Definition der Fakultät
int factorial(int x)
{
	if(x<0)
	{
	printf("Fehler! x>=0 erforderlich.\n");
	exit(0);
	}	
int fac_x;
int a;
	for(a=1, fac_x=1; a<=x; a+=1)
	fac_x*=a;
	return fac_x;
}

//Eigentliches Programm
int main(void)
{
printf("Fakultäten von: x, x+2, x+10\n");
int x; printf("x="); scanf("%d", &x);
int fac_x = factorial(x);

printf("x!=%d\n", factorial(x));
printf("(x+2)!=%d\n", factorial(x+2));
printf("(x+10)!=%d\n", factorial(x+10));
}
