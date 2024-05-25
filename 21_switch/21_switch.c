#include <stdio.h>

int main (void)
{
	switch(2)
	{
		case 1:
		printf("One");

		case 2:
		printf("Two\t");				//Two	Three

		case 3:
		printf("Three\n");
	}

	switch(3)
	{
		case 1:
		printf("One");

		case 2:
		printf("Two");				//Three

		case 3:
		printf("Three\n");
	}

	switch(5)
	{
		case 1:
		printf("One");

		case 2:
		printf("Two");				//Default

		case 3:
		printf("Three");

	default:
		printf("Default\n");
	}

	switch(5)
	{
		case 1:
		printf("One");

		default:
		printf("Default\t");				//Default	Two     Three

		case 2:
		printf("Two \t");

		case 3:
		printf("Three\n");
	}

		switch(5)
	{
		case 1:
		printf("One");

		case 2:
		printf("Two");					//no output

		case 3:
		printf("Three");
	}

	printf("Here there is no output.\n");

	return 0;
}

/*
output 

Two     Three
Three
Default
Default Two     Three
Here there is no output.

*/