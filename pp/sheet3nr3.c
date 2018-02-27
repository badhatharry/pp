#include<stdio.h>
#include<math.h>

int main(void)
{

  double x_0, v_0, a, x_t;
  printf("Function: x(t)=x_0+v_0*t+a/2*t^2. Please enter x_0, v_0, a and x(t):");
  scanf("%lf %lf %lf %lf", &x_0, &v_0, &a, &x_t);
  printf("x_0=%f, v_0=%f, a=%f, x(t)=%f\n", x_0,v_0,a,x_t);

  if(a==0)
  {
	double t= (x_t-x_0)/v_0;
	printf("t = %f\n", t); 
  }
  else
  {
  	double t_plus = v_0/a + sqrt( (v_0/a)*(v_0/a) + (2*(x_t-x_0)/a) );
  	double t_minus = v_0/a - sqrt( (v_0/a)*(v_0/a) + (2*(x_t-x_0)/a) );
  	printf("t_+=%fs, t_-=%fs\n",t_plus, t_minus);
  }

}
