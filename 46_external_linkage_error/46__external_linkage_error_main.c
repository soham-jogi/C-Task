void Fun (void);
#include <stdio.h>

int main (void)
{
	extern int g_iNo;

	printf("\nin main = %d\n",g_iNo);			//error =  error LNK2005: g_iNo already defined in 46_Fun.obj

	Fun();

	return 0;
}

int g_iNo = 10;
