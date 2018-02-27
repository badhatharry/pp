#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void peri_area(double l, double *p_ar, double *p_per){
	*p_ar=l*l; 
	*p_per=4.0*l; 
}

int main(void){
  
  double l, ar, per;
 
  printf("Enter the side length: l = ");
  scanf("%lf", &l);

  peri_area(l, &ar, &per);
  printf("Area: a = %f\nPerimeter: p = %f\n", ar, per);

}

