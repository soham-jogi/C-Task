#include <stdio.h>

int main(void)
{
	printf ("size of int = %d \n", sizeof(int));							//output = size of int = 4		    			
	printf ("size of short in = %d\n", sizeof(short int));					//output = size of short in = 2					
	printf ("size of long int = %d\n", sizeof(long int));					//output = size of long int = 4
	printf ("size of long long int %d\n", sizeof(long long int));			//output = size of long long int = 8

	printf ("size of char = %d\n", sizeof(char));							//output = size of char = 1
	//printf ("size of short in =%d\n", sizeof(short char));				//Error = 'short' followed by 'char' is illegal
	//printf ("size of long char =%d\n", sizeof(long char));				//Error = 'long' followed by 'char' is illegal
	//printf ("size of long long char%d\n", sizeof(long long char));		//Error = '__int64' followed by 'char' is illegal

	printf ("size of float = %d\n", sizeof(float));							//output = size of float = 4
	//printf ("size of short in =%d\n", sizeof(short float));				//Error =  'short' followed by 'float' is illegal
	printf ("size of long float = %d\n", sizeof(long float));				//output = size of long float =8  					// warning C4215: nonstandard extension used : long float
	//printf ("size of long long float%d\n", sizeof(long long float));		//Error = '__int64' followed by 'float' is illegal

	printf ("size of double = %d\n", sizeof(double));						//output = size of double = 8
	//printf ("size of short in =%d\n", sizeof(short double));				//Error = error C2632: 'short' followed by 'double' is illegal
	printf ("size of long double = %d\n", sizeof(long double));				//output = size of long double =8
	//printf ("size of long long double%d\n", sizeof(long long double));	//Error =  '__int64' followed by 'double' is illegal

	return 0;
}


