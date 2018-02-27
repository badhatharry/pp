#include<math.h>
#include<stdio.h>
#include<stdlib.h>

// UNIT TESTS


// Test functions

bool isLarger(const double lhs, const double rhs){
  if (lhs>rhs){return true;}
  else return false;}

bool isSmaller(const double lhs, const double rhs){
  if (lhs<rhs){return true;}
  else return false;}

bool isEqual(const double lhs, const double rhs, const double eps){
  if (fabs(lhs-rhs)<eps){return true;}
  else return false;}


// Mathematical functions

double gaussian(const double x, const double mu, const double sigma){
  return 1/(sqrt(2*M_PI)*sigma)*exp(-pow(x-mu,2)/(2*pow(sigma,2)));}

double sine(const double x, const double A, const double B){
  return sin(A*x+B);}

double exponential(const double x, const double alpha){
  return exp(alpha*x);}


// Testing the maths

bool gaussian_test(){
  const double x=5; const double mu=0; const double sigma=1;
  gaussian(x, mu, sigma);
  const double n=0.0;
  return isLarger(gaussian(x, mu, sigma), n);}

bool sine_test(){
  const double x=M_PI/4; const double A=4; const double B=M_PI/4; const double eps=0.001;
  sine(x, A, B);
  const double m=-1.0/sqrt(2);
  return isEqual(sine(x, A, B), m, eps);}

bool exponential_test(){
  const double x = -5; const double alpha=3; 
  exponential(x, alpha);
  const double o=1.0;
  return isSmaller(exponential(x, alpha), o);}

void printOutcome(const bool passed, const char *, const string [])
{
	if(passed)
	{
		printf("")
	}
	
}

void runAllTests(){

  int ok=0;
  if (gaussian_test())
	ok+=1;
  if (sine_test())
	ok+=1;
  if (exponential_test())
	ok+=1;

  
}




// Actual program

int main(){

  printf("Test of gaussian. x=5, mu=0, sigma=1. Greater zero?\n");
  gaussian_test();
  if (gaussian_test()==1) printf("success\n");  
  else printf("failed\n");

  printf("Test of sine. A=4, B=Pi/4, eps=0.001. Equals -1/sqrt(2)?\n");
  sine_test();
  if (sine_test()==1) printf("success\n");
  else printf("failed\n");

  printf("Test of exponential. x=-5, alpha=3. Less than one?\n");
  exponential_test();
  if (sine_test()==1) printf("success\n");  
  else printf("failed\n");
}








