#include <stdio.h>

int main (void)
{
	int iNo1 = 0;			//iNo1 = 0
	int iNo2 = 1;			//iNo2 = 1
	int iNo3 = 2;			//iNo3 = 3
	int iAns;				//iAns = 1

	iAns = iNo1 && ++iNo2 || iNo3++ ;

	printf(" iNo1 = %d \n iNo2 = %d\n iNo3 = %d\n iAns = %d\n",iNo1,iNo2,iNo3,iAns);

	return 0;
}