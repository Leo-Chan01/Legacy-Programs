/*
	QUADRATIC SOL. === INTERACTIVE CODE
		AUTHOR: EPHRAIM U.E.
		DATE STARTED: 28TH MAY 2020
		DATE FINISHED: 29TH MAY 2020
	
		TIME STAMP: 4:08 PM.
		elapsed time: 1HR45MINs
*/

#include<stdio.h>
#include<math.h>

int main(){
//declare required variables
	float a,b,c;
	float x1,x2,real,imaginary;
	
//ask user for input'
	printf("input a ");
	scanf("%f",&a);
	//printf("a is %f",a);
	
	printf("input b ");
	scanf("%f",&b);
	//printf("b is %f",b);
	
	printf("input c ");
	scanf("%f",&c);
	//printf("a is %f",c);

	//check if roots are real or imaginary
	if((b*b)<(4*a*c))
	{
		//solve for imaginary roots
		real = -b/(2*a);
		//printf("%d\n",real);
		imaginary = +(sqrt((4*a*c)-(b*b)));
		printf("Root 1= %.2f",(real+imaginary));
		
		real = -b/(2*a);
		//printf("%d\n",real);
		imaginary = -(sqrt((4*a*c)-(b*b)));
		printf("\nRoot 2= %.2f",(real+imaginary));
	}
	else
	{
		//calculate and display real roots	
		x1 = (int)((-b) + (sqrt((b*b)-(4*a*c))))/(2*a);
		x2 = (int)((-b) - (sqrt((b*b)-(4*a*c))))/(2*a);
		printf("\n\n");
		printf("Root 1= %d\n",x1);
		printf("Root 2= %d\n",x2);	
	}
}


