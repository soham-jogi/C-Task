#include <stdio.h>

int main(void)
{
	printf("alert sound will be genrated \a \n");					// work => alert sound gnrated  
	
	printf ("hello\b you wil see hell  \n ");						// work => backspace has seen  

	printf("\f\n");													// work => puts carat on next page

	printf("a new line would start\nhas started\n");				// work => new line has started

	printf(" after typing carriage come on starting \r \n");			// work => puts carat to start of line

	printf("a tab will occur \t occured\n");						// work => a tab is occurs

	printf("vertical tab would occur \v occured\n");				// work => a vertical tab would occur

	printf("string terminating null character \0\n");				// work => string null terminating character 

//----------------------------------------------------------------------------------------------------------------------------

	printf("Hello \n");										// output => Hello
	//printf(""Hello"");									//ERROR ,: missing ')' before identifier 'Hello'
	printf("\"Hello\" \n");									//output => "Hello"

	printf("'Hello'\n");									// output => 'Hello'
	printf("\'Hello\'\n");									// output => 'Hello'

	printf("Hello ?\n");									// output => Hello?
	printf("Hello \? \n");									// output => Hello?

	//printf("\temp\bin\new\n");							bug =>	emin	
	//														bug =>ew  


	printf("\\temp\\bin\\new\n");							//output => \temp\bin\new					


	return 0;
}