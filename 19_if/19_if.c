#include <stdio.h>

int main (void)
{
	int iNo = 5;
	if(iNo < 10)
		printf("One ");		//simple statemante,
		printf("Two \n");	//output = One Two

	iNo = 15;
	if(iNo < 10)
		printf("One ");		//simple statement
		printf("Two \n");	//output = Two

	iNo = 5;
	if(iNo < 10)
	{
		printf("One ");		//compound statement
		printf("Two \n");	//output = One Two
	}

	iNo = 15;
	if(iNo < 10)
	{
		printf("One ");		//compound statement
		printf("Two \n");	//output = no output
	}
	printf("no output \n ");

	iNo = 15;
	if(iNo < 10);			//Null statement will if statement
		printf("One ");	
		printf("Two \n");	//output = One Two

	return 0;
}