#include<stdio.h>
#include<math.h>

int main(void)
{
  // Input

  double a,b,c;
  printf("Please enter three side lengths: ");
  scanf("%lf %lf %lf", &a, &b, &c);
  printf("You entered a=%f, b=%f, c=%f\n", a,b,c);
  
  // Checking all the side lengths for violations 
 
  if((a>0)&&(b>0)&&(c>0))
  {
  if((b+c>=a)&&(a+c>=b)&&(a+b>=c))
  {
  if((a<=fabs(b-c))&&(b<=fabs(a-c))&&(c<=fabs(a-b)))
	printf("Every side must have a lentgth greater than the difference of the other two.\n");
  else 
   	printf("You entered a valid triangle.\n");
  }
  else 
 	printf("Every side length must be less than the sum of the other two lengths.\n");  
  }
  else
	printf("All sides must have a length greater than zero.\n");  

  // Determining the type of triangle

  if((a==b)&&(b==c)&&(c==a))
	printf("The triangle is equilateral.\n");
  else 
  {
  if(a==b || b==c || c==a)
	printf("The triangle is isosceles.\n");
  else
	printf("The triangle is scalene.\n");
  }

  // Is the triangle right-angled?

  

}
