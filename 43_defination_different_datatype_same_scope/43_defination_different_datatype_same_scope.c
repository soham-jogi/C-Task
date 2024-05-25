#include <stdio.h>

int main (void)
{
	int No = 10;		 	// see declaration of 'No'
	float No = 57.33;	 	// error C2374: 'No' : redefinition; multiple initialization

//43_defination_different_datatype_same_scope.c(6) : warning C4142: benign redefinition of type

	printf("%d",No);

	return 0;
}
