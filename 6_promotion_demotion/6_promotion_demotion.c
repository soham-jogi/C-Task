#include <stdio.h>

int main(void)
{
	int iAns;

	iAns = 3.25*2+(5/2);      

	printf ("%d",iAns);				//output => 8

	return 0 ;
}

/* 
	iAns = 3.25*2+(5/2);
		 = 3.25*2;			//Promotion of 2 to 2.0
		 = 6.5 +2;			//Promotion of 2 to 2.0
		 = 8.25				//Demotion of 8.5 to 8

	iAns = 8
*/