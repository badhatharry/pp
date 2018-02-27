#include<stdio.h>
#include<math.h>

int main(void)
{
//read and display input.txt
int a00, a01, a02, a10, a11, a12, a20, a21, a22;
int b1, b2, b3;
printf("\nPlease enter nine plus three integers:\n\n");
scanf("%d %d %d %d %d %d %d %d %d %d %d %d",&a00,&a01,&a02,&a10,&a11,&a12,&a20,&a21,&a22,&b1,&b2,&b3);
printf("Matrix A:\n	|%+5d %+5d %+5d|\n	|%+5d %+5d %+5d|\n	|%+5d %+5d %+5d|\n\n", a00, a01, a02, a10, a11, a12, a20, a21, a22);
printf("Vector b:\n	|%+5d|\n	|%+5d|\n	|%+5d|\n\n", b1, b2, b3);
//calculation stuff
printf("First component of A*b: a00b1+a01b2+a02b3=%d\n", a00*b1+a01*b2+a02*b3);
printf("First component of A*A: a00a00+a01a10+a02a20=%d\n", a00*a00+a01*a10+a02*a20);
printf("Tr(A*A)=%d\n\n", a00*a00+a01*a10+a02*a20+a01*a10+a11*a11+a12*a21+a02*a20+a22*a22+a21*a12);
}
