#include <stdio.h>

int main (void)
{
	int iNo = 10;		 // see declaration of 'iNo'
	int iNo = 20;		 //error C2374: 'iNo' : redefinition; multiple initialization

	printf("%d",iNo);

	return 0;

}
