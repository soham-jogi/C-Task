#include <stdio.h>

int main (void)
{
	printf(" 1 && 1 = %d\n",1 && 1);					//1
	printf("1 && 0 = %d\n",1 && 0);						//0
	printf("1 || 0 = %d\n",1 || 0);						//1
	printf("1 || 1 = %d\n",1 || 1);						//1
	printf("0 || 0 = %d\n",0 || 0);						//0
	printf("!0 = %d\n\n\n",!0);				   			//1


	printf(" 10 && 20 = %d\n",10 && 20);				//1
	printf(" 10 && -10 = %d\n",10 && -10);				//1
	printf("10 || 10 = %d\n", 10 || 10);			 	//1	
	printf("-10 || 10 = %d\n",-10 || 10);				//1
	printf("!10 = %d\n",!10);							//0
	printf("!-20 = %d\n",!-20);							//0
}

/*
	output 
	{
	     1 && 1 = 1
         1 && 0 = 0
         1 || 0 = 1
         1 || 1 = 1
         0 || 0 = 0
         !0 = 1


         10 && 20 = 1
         10 && -10 = 1
         10 || 10 = 1
         -10 || 10 = 1
         !10 = 0
         !-20 = 0	
	}

	note
	{
		means these operators consider zero as 0 and non - zero as 1
	}  

*/

