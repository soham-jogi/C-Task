#include <stdio.h>

int main (void)
{
	printf("\a");						//beep sound 

	printf("%c\n",'A');					//A			

	printf("%i\n",166);					//166								

	printf("%d\n",-166);				//-166					

	printf("%o octal \n",1897);			//3551 octal					

	// error printf("%u\n",0199);		// 9= illegal digit 9 for base 8  because 0 before number indicates the number is octal

	printf("%u\n",199);					//199

	printf("%x\n",989);					//3dd

	printf("%X\n",7112);				//1BC8

	printf("%ld\n",166);				//166

	printf("%hd\n",-166);				//-166

	printf("%lu \n",-166);				//4294967130

	printf(" %hu  \n",-166);			//65370

	printf("%f\n",12.2);				//12.200000

	printf("%e \n",33.9);				//3.390000e+001

	printf("%E \n",33.91);				//3.391000E+001

	printf("%g\n",199.123);				//199.123

	printf("%G\n",12.19);				//12.19

	printf("%lf\n",99821.4598);			//99821.459800

	printf("%s\n","soham\0");			//soham

	printf("%p\n",13);					//000000000000000D

	return 0;
}

