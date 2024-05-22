#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	printf("%d%%%d = %d \n",9,2,9%2);       			//9%d = 2
													    
	printf("%d%%%d = %d\n",9,-2,9%-2);   			    //9%-2 = 1

	printf("%d%%%d = %d\n",-9,2,-9%2);   			 	//-9%2 = -1   
										
	printf("%d%%%d = %d\n",-9,-2,-9%-2);				//-9%-2 = -1

	exit(2);
} 

int iNo1;