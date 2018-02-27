#include<stdio.h>
#include<math.h>

int main(void)

{
//+++++++++++++++++++++++++++++++++++++++++++++++
// TASK 1

//unsigned integer
	unsigned int a=10;
	printf("%u \n", a);

//signed integer
	signed int b= 4;
	printf("%+i\n", b);

//unsigned with leading zeroes
	unsigned int k=19;
	printf("%05d\n", k);

//mandatory plus/minus sign
	signed int j=-18;
	printf("%+d\n", j);

//floating point number
	double d=89.345;
	printf("%f\n", d);

//fpn w given number of digits after comma
	double e=9.1234459595;
	printf("%.5f\n", e);

//fpn w given digits before and after comma
	double f=10.123456;
	printf("%4.3f\n", f);

//fpn in decimal exponent notation
	double g=98763021;
	printf("%e\n",g);

//a percent symbol
	printf("%%\n");

//+++++++++++++++++++++++++++++++++++++++++++++++
// TASK 2

//-35 and +42
	signed int o=-35;
	signed int p=42;
	printf("%+i %+i\n", o, p);

//1/4 with one dec. digit
	printf("%.1f\n", 1.0/4.0);

//4 atan....
	printf("%.20f\n", 4.0*atan(1.0));

//2^....
	printf("%e\n", pow(2, exp(5.0)));

//++++++++++++++++++++++++++++++++++++++++++++++
// TASK 3

//actual pi
	printf("pi=%.20f\n", M_PI);
	printf("ax=%.20f\n", 4.0*atan(1.0));
}
