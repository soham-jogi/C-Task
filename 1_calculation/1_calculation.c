#include "1_calculation.h"
#include <stdio.h>

int main (void)
{
	int no1;
	int no2;
	int ans;

	printf ("Enter two numbers : \t");
	scanf  ("%d%d",&no1,&no2);

	ans = addition(no1,no2);                      //funtion call
	printf("\n addition is %d \n",ans);

	subtraction (no1,no2);

	ans = multiplication ();
	printf("\n multiplication is %d\n" ,ans);

	division();

	printf("\n for modulus, \n");
	printf("Enter numerator: \t");
	scanf("%d",&no1);
	printf("Enter denominator : \t");
	scanf("%d",&no2);

	ans = modulus (no1,no2);
	printf("\n Remainder is %d\n",ans);

	return 0;

}

int multiplication(void)

{
	int no1;
	int no2;
	int ans;

	printf("\n For multiplication,\n");
	printf("Enter two numbers: \t ");
	scanf("%d%d",&no1,&no2);

	ans = no1 * no2 ;

	return ans;

}

int addition(int no1 , int no2)             //functions defination
{
	return no1 + no2 ;
}

int modulus (int no1, int no2)
{
	return no1 % no2 ;
}

void division (void)
{
	int numerator;
	int denominator;
	int quotient;

	printf("\n For division \n ");
	printf(" enter numerator: \t");
	scanf("%d",&numerator);

	printf("\n enter denominator");
	scanf("%d",&denominator);

	quotient = numerator / denominator ;

	printf("Quotient is %d \n", quotient);
}

void subtraction (int no1, int no2)
{
	printf("\n subtraction is %d \n",no1 - no2);
}