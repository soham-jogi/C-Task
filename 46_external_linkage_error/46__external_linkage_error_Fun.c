void Fun (void);
#include <stdio.h>

int g_iNo = 10;

void Fun (void)
{
	printf("in Fun = %d\n",g_iNo);				//error = fatal error LNK1169: one or more multiply defined symbols found
}

