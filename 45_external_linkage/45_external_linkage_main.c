void Fun (void);
#include <stdio.h>

int main (void)
{
	extern int g_iNo;

	printf("\nin main = %d\n",g_iNo);			//output = in main = 10

	Fun();

	return 0;
}