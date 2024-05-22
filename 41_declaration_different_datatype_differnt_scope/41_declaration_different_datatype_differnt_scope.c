#include <stdio.h>

extern int No;

int main (void)
{

	extern float No; 					// 41_declaration_different_datatype_differnt_scope.obj : 
										//error LNK2019: unresolved external symbol No referenced in function main

	printf("\n No = %d\n",No);			//41_declaration_different_datatype_differnt_scope.exe : 
										//fatal error LNK1120: 1 unresolved externals		

	return 0;
}



