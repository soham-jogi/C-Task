#include <stdio.h>
void Fun (void);


void Fun (void)
{
	extern No;

	printf("in Fun %d\n",No);		//output :- in Fun 10
	
}