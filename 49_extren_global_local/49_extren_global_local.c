#include <stdio.h>

int g_iNo1;
int g_iNo2 = 10;
extern int g_iNo3;
extern int g_iNo4 = 20;

int main (void)
{
	int iNo1;
	int iNo2 = 10;
	extern int iNo3;
	//extern int iNo4 = 20;				 //error C2205: 'iNo4' : cannot initialize extern variables with block scope

//printf's
	printf("g_iNo1 = %d\n",g_iNo1);		//g_iNo1 = 0
	printf("g_iNo2 = %d\n",g_iNo2);		//g_iNo2 = 10	
	printf("g_iNo3 = %d\n",g_iNo3);		//g_iNo2 = 0
	printf("g_iNo4 = %d\n",g_iNo4);		//g_iNo4 = 20

	printf("iNo1 = %d\n",iNo1);			//iNo1 = 0
	printf("iNo2 = %d\n",iNo2);			//iNo2 = 10
	printf("iNo3 = %d\n",iNo3);			//iNo3 = 0
	//printf("iNo4 = %d\n",iNo4);		//error C2205: 'iNo4' : cannot initialize extern variables with block scope	

	return 0;
}

