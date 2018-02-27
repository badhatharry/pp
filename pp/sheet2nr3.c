#include<stdio.h>
#include<math.h>

int main(void)

{

//Tasks 1a) & 1b)

int x, y; double z;
printf("\nPlease enter two integers and a floating point number.\n");
scanf("%d", &x); scanf("%d", &y); scanf("%lf", &z);
printf("%d %d %f\n\n", x, y, z);

//Task 1c)

printf("%+5d %+5d %+1.2f\n", x-1, x+y, y*z);
printf("%+1.2f %+1.2f %+5d\n", x*z, z*z, x/y);
printf("%+1.2f %+5d %+1.2f\n\n", 1.*x/y, x%y, z/3);

//Task 1d)

printf("Trace=%f\n\n", (x-1)+(z*z)+(z/3));

//Task 1e)

printf("%+5d\n%+5d\n%+1.2f\n\n", x, y, z);

//Task 1f)

printf("Norm=sqrt(x²+y²+z²)=%+.4f\n", sqrt(x*x+y*y+z*z));
printf("Sum=x+y+z=%+.4f\n\n", x+y+z);

}
