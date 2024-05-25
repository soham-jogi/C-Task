#include <stdio.h>

int main (void)
{
	int iNo = 5;
	if(iNo < 10)
		printf("One \n");			//output = "One"
	else
		printf("Two");
//--------------------------------------------------------------------
	iNo = 15;
	if(iNo < 10)
		printf("One"); 				//output = "Two"
		else
		printf("Two \n");
//--------------------------------------------------------------------
  	/*
		iNo = 5;
		if(iNo < 10)
			printf("One");
			printf("Two");
		else							// error, illegal else without matching if
			printf("Three");
  	*/
//---------------------------------------------------------------------
	iNo = 15;
	if(iNo < 10)
	{	
		printf("One");             //output = "Three"
		printf("Two");
	}
	else
		printf("Three");
//-------------------------------------------------------------------
	/*
	iNo = 15;
	if(iNo < 10);
	{	
		printf("One");
		printf("Two");
	}
	else							// illegal else without matching if
		printf("Three");*/
//------------------------------------------------------------------------
	return  0;
}