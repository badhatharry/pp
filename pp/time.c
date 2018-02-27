#include<stdlib.h>
#include<stdio.h>

void time(int sec){	// time converter with modulo function
	int hrs = 0;
	int min = 0;

	if(sec >= 3600) 
	{
		hrs = (int)sec/3600;
		sec = (int)sec%3600;
		min = (int)sec/60;
		sec = (int)sec%60;
		printf("Time hh:mm:ss is: %d:%d:%d\n", hrs, min, sec);
	}

	else if (sec < 3600 && sec >= 60)
	{
		min = (int)sec/60;
		sec = (int)sec%60;
		printf("Time hh:mm:ss is: %d:%d:%d\n", hrs, min, sec);
	}

	else if(sec < 60)
	{
		printf("Time hh:mm:ss is: %d:%d:%d\n", hrs, min, sec);
	}
}

/*
void time(int sec){	// time converter with substraction
	int hrs = 0;
	int min = 0;

	for(;sec >= 3600;sec -= 3600)	
	{ 
		hrs += 1; 
	}

	for(;sec >= 60;  sec -= 60)   
	{ 
		min += 1; 
	}

	printf("Time hh:mm:ss is: %d:%d:%d\n", hrs, min, sec);
}
*/

int main(){
	int sec;
	printf("How many seconds? N_s = ");
	scanf("%d", &sec);
	time(sec);
	return 0;
}

