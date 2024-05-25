#include <stdio.h>

int main (void)
{
	printf("8 & 14 = %d\n",8 & 14);			// 8 
	printf("8 | 14 = %d\n",8 | 14);			// 14
	printf("8 ^ 14 = %d\n",8 ^ 14);			// 6
	printf("~8 = %d\n", ~8);				//-9
	printf("8 << 1 = %d\n",8 << 1);			// 16 
	printf("8 >> 1 = %d\n",8 >> 1);			// 4 
	printf("20 << 2 = %d\n",20 << 2);		// 80 
	printf("20 >> 2 = %d\n",20 >> 2);		// 5 

	return 0;
}

/*
	
	output
	{
		8 & 14 = 8
		8 | 14 = 14
		8 ^ 14 = 6
		~8 = -9
		8 << 1 = 16
		8 >> 1 = 4
		20 << 2 = 80
		20 >> 2 = 5
	}

*/