#include <stdio.h>

int main (void)
{
	int iNo1 = 0;
	int iNo2 = 1;
	int iNo3 = 2;
	int iAns ;

	iAns = ++iNo1 || ++iNo2 && ++iNo3;

	printf(" iNo1 = %d \n iNo2 = %d\n iNo3 = %d\n iAns = %d\n",iNo1,iNo2,iNo3,iAns);		

	return 0;
}


/* 
	how it works
	{
	 iAns = ((++iNo1) || (++iNo2) && (++iNo3)))
	 	  = ++iNo1 || ((++iNo2) && (++iNo3))
	 	  = 1 || ((++iNo2) && (++iNo3))         ---------------------------- jevha or cha first operant 1 asto tevha to dusrya kade jat nahi
	 iAns = 1 	  
	}


	output 
	{
		iNo1 = 1
  		iNo2 = 1
 		iNo3 = 2
 		iAns = 1
	}

*/