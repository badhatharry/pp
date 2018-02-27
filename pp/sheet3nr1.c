#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{

  // Input and variables
  unsigned int N;
  printf("How many darts do you want to throw? N=");
  scanf("%d",&N);

  double x,y; 
  unsigned int nPoints=0;

  // Loop for every dart thrown	
  srand(time(NULL));
  for (int a=1; a<=N; a+=1)
  {
	// Coordinate system,
	// By modifying the the numbers rand() chooses from.
	// rand()/RAND_MAX gives a number in [0,1]. 
	// *10 gives then [0,10] and -5 finally [-5,5].
	  x=(double)rand()/(double)RAND_MAX*10.0-5.0;
	  y=(double)rand()/(double)RAND_MAX*10.0-5.0;
	printf("x=%f, y=%f\n",x,y);

	// If statement with redundant "else" part, just for completion
	if(sqrt(x*x+y*y)<=5)
	  nPoints+=4;
	else
	  nPoints+=0;
  }  

  // Score
  printf("N=%d, Points=%d, your score is %1.2f\n", N, nPoints, (double)nPoints/N);

}
