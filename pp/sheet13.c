#include<math.h>
#include<stdio.h>
#include<stdlib.h>


struct partial_sum{
  int p;
  int N0;
  int N1;
  int dN;
};

typedef struct partial_sum PARTIAL;


PARTIAL readInput(){		// function to read the input 

  PARTIAL SN;			// instance of struct
 
  int a[4];			// array to store input in
printf("start\n");

  FILE *input = fopen("input.dat", "r");
  if(input == NULL)
  {
	printf("Error while reading input.\n");
	exit(0);
  }
  
  int i  = 0;
  int i1 = 0;
  int d1 = 0;
  printf("start\n");

  while(1)			// loop to check every entry in 
  {				// input and store it to array
	i1 = fscanf(input, "%d", &d1);
printf("start\n");

	if(i1 == EOF) break;

	if(i1 != 1) 
	{
	   printf("Error while scanning.\n"); 
	   exit(0);
	}

	a[i] = d1;
	i++;
  }  
printf("start\n");

  SN.p  = a[0];			// putting array values into struct
  SN.N0 = a[1];
  SN.N1 = a[2];
  SN.dN = a[3];

  fclose(input);
  return SN;
}


void getPartial(PARTIAL *SN){
printf("start\n");
  if((SN->N1 - SN->N0) % SN->dN != 0)
  {
	printf("start\n");
	printf("Error\n");
	exit(0);
  }

  double sum = 0;

  FILE *output = fopen("output.dat", "w");

printf("start\n");
  for(int m = 0; SN->N0 + m*SN->dN <= SN->N1; m++)
  {
	for(int i = m*SN->dN + SN->N0; i <= SN->N0 + (m+1)*SN->dN;i++)
	{
	   sum += 1./(pow(i, SN->p));
	}
	fprintf(output, "%.12lf     %d\n", sum, m);
	sum = 0;
  }

printf("start\n");
  fclose(output);
}

/*		I HAVE NO IDEA HOW TO USE THESE TWO

void writeOutput(){

}

*/

int main(){
  PARTIAL SN = readInput();
//  readInput();
  getPartial(&SN);
//  printf("SN.dN = %d\n", SN.dN);
  return 0;
}





































/*			

Size of a structure is not always the sum of its elements (that is the lower bound).
It can be larger. sizeof(struct <name>) gives struct size. 


TASK 2
======

(i)	Operators: . and -> 	
	myTrianglePtr->height becomes (*myTrianglePtr).height

(ii)	struct Triangle Tri1; becomes 
	typedef struct Triangle Tri; 
	Tri Tri1;

(iii)	(a)	false. Just a declaration (d. do not fill up memory). 
	(b)	false. You can have structures in structures for example.
	(c)	true. YOu can in fact have arrays of structures.
	(d) 	false. You cannot use comparison operatorsi

(iv)	

#include<stdio.h>
#include<stdlib.h>

int time(int sec){
  int hrs=0;
  int min=0;
  
  for(;sec >= 3600;sec -= 3600)	
  {
 	hrs += 1;
  }

  for(; sec <= 60; sec -= 60)
  {
	min += 1;
  }

  printf("Time hh:mm:ss is: %d:%d:%d\n", hrs, min, sec);
}

int main(){
  int sec;
  printf("How many seconds? N_s = \n");
  scanf("%d", &sec);
  time(sec);
  return 0;
}

(v)

#include<stdio.h>
#include<stdlib.h>

int power(int a, int b){
  if(b<=0) return 1;
  return a*power(a, b-1);
}

int main(){
  int a=5;
  int b=3;
  printf("pow(a,b) = %d\n", power(a,b));
}


#include<stdio.h>
#include<stdlib.h>

int power(int a, int b){
  if(b<=0) return 1;
  return a*power(a, b-1);
}

int main(){
  int a=5;
  int b=3;
  printf("pow(a,b) = %d\n", power(a,b));
}

*/

