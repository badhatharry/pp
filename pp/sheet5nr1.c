#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>

int main(void)
{

  int y1,n;
  printf("\nEnter a year. y1= ");
  scanf("%d", &y1);
  
  printf("\nWhat do you want to know?\n1. Is it a leap year or not?\n2. Count leap years in range\n3. If entered year is  leap year, evaluate number of birthdays and real age\nType the number of the option to choose: ");
  scanf("%d", &n);

if (n==1)
{     
	if (y1<1582)
	  printf("\nYear must be above 1582, which is when GC was introduced.\n");
	else if (y1%4==0 && y1%100!=0 || y1%400==0)
  	  printf("\nIts a leap year\n");
	else
	  printf("\nNot a leap year\n");
}

else if (n==2)
{
	int y2;
	int count=0;
	printf("\nEnter another year: y2= \n");
	scanf("%d" , &y2);
	
	if (y1>y2){
	for (int y=y1; y>=y2; y--)
	  count++;
 	  printf("");
	}
}

}
