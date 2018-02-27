#include<math.h> 
#include<stdio.h> 
#include<stdlib.h>
	
int x=1;

void useLocal(void){
	printf("x=%d\n", x);
int x=25;
	printf("x=%d\n", x);
x+=1;
	printf("x=%d\n", x);
}

void useStaticLocal(void){
	printf("x=%d\n", x);
static int x=50;
	printf("x=%d\n", x);
x+=2;
	printf("x=%d\n", x);
}

void useGlobal(void){
	printf("x=%d\n", x);
	printf("x=%d\n", x);
x*=10;
	printf("x=%d\n", x); 
}

int main(void){
	printf("x=%d\n", x);
int x=5;
printf("x=%d\n", x);

useLocal();
useStaticLocal();
useGlobal();

	{
	printf("x=%d\n", x); 
	int x=7;
	printf("x=%d\n", x);
	}

printf("x=%d\n", x);

useLocal();
useStaticLocal();
useGlobal();

}
