#include <stdio.h>

int main (void)
{
	int iAns1,iAns2;					//Separator

	iAns1 = 10,20,30;					//Operator
	iAns2 = (10,20,30);					//Operator

	printf("%d\n%d\n",iAns1,iAns2);		//Separator      //10,30

	return -1,1,0;              		//Operator
}