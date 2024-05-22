#include <stdio.h>

int main (void)
{
	int iNo = 10;
	char chChar = 'A';
	float fNo = 57.33;
	double dNo = 69.33;

	printf ("sizeof(int) = %d\n",sizeof(int));				//sizeof(int) = 4
	printf ("sizeof(char) = %d\n",sizeof(char));			//sizeof(char) = 1
	printf ("sizeof(float) = %d\n",sizeof(float));			//sizeof(float) = 4
	printf ("sizeof(double) = %d\n",sizeof(double));		//sizeof(double) = 8

	printf ("sizeof(iNo) = %d\n",sizeof(iNo));				//sizeof(iNo) = 4
	printf ("sizeof(chChar) = %d\n",sizeof(chChar));		//sizeof(chChar) = 1
	printf ("sizeof(fNo) = %d\n",sizeof(fNo));				//sizeof(fNo) = 4
	printf ("sizeof(dNo) = %d\n",sizeof(dNo));				//sizeof(dNo) = 8

	printf ("sizeof(20) = %d\n",sizeof(20));				//sizeof(20) = 4
	printf ("sizeof('B') = %d\n",sizeof('B'));				//sizeof('B') = 4
	printf ("sizeof(99.99) = %d\n",sizeof(99.99));			//sizeof(99.99) = 8 
	printf ("sizeof(99.99f) = %d\n",sizeof(99.99f));		//sizeof(99.99f) = 4

	printf ("sizeof 20 = %d\n",sizeof 20 );    				//sizeof 20 = 4
	printf ("sizeof iNo = %d\n",sizeof iNo );				//sizeof iNo = 4
	// printf ("%d\n",sizeof int );							//error : error C2059: syntax error : 'type'

	printf ("%d\n",iNo);									//10
	printf ("sizeof(++iNo) = %d\n",sizeof(++iNo));			//sizeof(++iNo) = 4
	printf ("%d\n",iNo);									//10

	printf ("sizeof(void) = %d\n",sizeof(void));			//sizeof(void) = 0 			note :- some compiler ma give '1' also

	return 0;
}