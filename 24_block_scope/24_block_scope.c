#include <stdio.h>

int main(void)
{
	int iNo1 = 10;
	printf("%d\n",iNo1);				//allowed  o/p = 10
	//printf("%d",iNo2);			      error C2065: 'iNo2' : undeclared identifier 

	{
		int iNo2 = 20;					//block scope
		printf("%d\n",iNo1);			//allowed o/p = 10
		printf("%d\n",iNo2);			//allowed o/p = 20
	}

	printf("%d\n",iNo1);				//allowed o/p = 10
	//printf("%d",iNo2);			  	  error C2065: 'iNo2' : undeclared identifier

	return 0;
}