#include <stdio.h>

int main (void)
{
	char chChar;

	printf("Enter character:\t");
	scanf("%c",&chChar);

	switch(chChar)
	{
	  case 'a':
	  case 'e':
	  case 'i':
	  case 'o':
	  case 'u':
	  	printf("It is small letter vowel");				
	  	break;

	  case'A':
	  case'E':
	  case'I':
	  case'O':
	  case'U':
	  	printf("It is capital letter vowel");
	  	break;

	  default:
	  	printf("It is not a vowel");
	}

	return 0;
}

/*

output 

depend on users choice

*/