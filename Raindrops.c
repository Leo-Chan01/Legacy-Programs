/*
	RAINDROP SIMULATOR === INTERACTIVE CODE
		ABOUT: 	THIS PROGRAM SIMULATES RAINDROP IF A NUMBER IS A FACTOR OF 3,5,7
		AUTHOR: EPHRAIM U.E.
		DATE STARTED: 4 JUNE 2020
		DATE FINISHED:	4 JUNE 2020
	
		TIME STAMP: 1:46 AM.
		elapsed time: 6 MINUTES
*/
#include<stdio.h>
#include<math.h>


int main()
{
	//declare required variables
	int factor,num;
	//ask user for input *num
	printf("please input a number to continue: ");
	scanf("%d",&num);
	//if num % 7 == 0 display plong
	if(num % 7== 0)
	{
		printf("plong");
	}
	//if num % 3 == 0 display pling
	if(num % 3== 0)
	{
		printf("pling");
	}
	// if 5 is a factor of num; diplay plang
	if(num % 5 == 0)
	{
		printf("plang");
	}
}
