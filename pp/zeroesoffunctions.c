#include<stdlib.h>
#include<stdio.h>
#include<math.h>

#define real double

real f0(real x){
	return sin(x);
}

real f1(real x){
	return -cos(x)+x; 
}

real f2(real x){
	return -1/2.0 + x*pow((3/2.0 + sin(M_PI*x)) , -1);
}

real secmethod(real xMax, real xMin){
	return (-f1(xMin)*(xMax-xMin))/(f1(xMax)-f1(xMin)) + xMin;
}

real newtrapmeth(real x){
	return x-(f1(x)/(sin(x)+1));
}


int main(void){
  
  int a;
  printf("Whatchu wanna do?\n1. Bisection for f(x)= sin(x)\n2. Secant method for f(x)= -cos(x)+x\n");
  scanf("%d",&a);

/*
if (a==1){
	double eps = pow(10, -6);
	double xMin, xMax;
	printf("Enter xMin= \n"); scanf("%lf", &xMin);
	printf("Enter xMax= \n"); scanf("%lf", &xMax);
	
	if(xMax<xMin){
		printf("Error. xMax must be greater than xMin.");
	}
}
*/

// SECANT METHOD

/* else */ if (a==2){

	printf("Secant method for f(x) = f1(x) = -cos(x) + x\n");
	real x; int y=1;
	real eps = pow(10, -6);
	real xMin=0.5, xMax=2.0;
	printf("xMin = 0.5\n"); printf("xMax = 2.0\n"); 

	while (fabs(xMax-xMin) >= eps){
		x=secmethod(xMax, xMin);
		if (y%2==0) {
			xMin=x;
		}
		else {	
			xMax=x;	
		}
	y+=1;
	}
	printf("Secmethod: x_0=%f\n", secmethod(xMax, xMin));
}

// NEWTON-RAPHSON METHOD

else if (a==3){

	printf("Newton-Raphson method for f(x) = f1(x) = -cos(x) + x\n");
	
	real eps=pow(10, -6);
 	real xMin=0.5, xMax=2.0;
 	printf("xMin = 0.5\n"); printf("xMax = 2.0\n");         
	real x0=(xMax-xMin)/2.0; 
	
	real x;

	for (real a=x0 ; fabs(f1(a))>=eps ; a=x){
	x=newtrapmeth(a);
	printf("Newtrap meth: x_0=%f\n", x);
	}

}





}
















