#include<stdlib.h>
#include<math.h>
#include<stdio.h>

#define real float  // In printf nur %e benutzen (float und double)

real x;
real eps=pow(10, -1);


// func = function
real func(real x){
  return (x+cos(x)-1)/x;
}

// funcD = function derivative
real funcD(real x){
  return (1-cos(x)-x*sin(x))/pow(x, 2);
}

// gI = func. der. 1st approximation
real gI(real x){
  return (func(x-eps)-func(x+eps))/(2*eps);
}

// gII = func. der. 2nd approximation
real gII(real x){
  return (func(x-2*eps)-8*func(x-eps)+8*func(x+eps)-func(x+2*eps))/(12*eps);
}


int main(void){

  real xMin=-10, xMax=+10;
  real N=(xMax-xMin)/eps +1; 

  for(real a=xMin; a<=xMax; a+=eps){  
	
//  printf("x=%e\n", a);
//  printf("f(x)=%e\n", func(a)); printf("fD(x)=%e\n", funcD(a));
//  printf("gI(x)=%e\n", gI(a)); printf("gII(x)=%e\n", gII(a));	
  printf("%e    ", func(a));// printf("fD(x)=%e\n", funcD(a));
  printf("%e\n", gI(a));// printf("gII(x)=%e\n", gII(a));	


	}
 


 
}

