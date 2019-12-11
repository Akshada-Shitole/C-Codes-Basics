//basic file operations

#include<stdio.h>
#include<conio.h>

int main()
{
	FILE *fp;
	char ch;

	printf("\n DATA INPUT\n\n");

	fp=fopen("c:\\temp\\abc.txt","w");

    // Open file for input

	ch=getchar();

	while(ch != EOF)		// Get a character from keyboard
	{
		putc(ch,fp);
		ch = getchar();				// Write a character into file
	}

	fclose(fp);							// Close the file INPUT

	printf("\n DATA OUTPUT\n\n");

	fp=fopen("c:\\temp\\abc.txt","r");			// Reopen file for output

    ch = getc(fp);

	while(ch != EOF)			// Read a character from file
	{
		printf("%c",ch);
		ch = getc(fp);				// Display a character on screen
	}

	fclose(fp);							// Close the file INPUT

	getche();

	return 0;
}

/*
    output:
     DATA INPUT

    Welcome to GPN
    hello how r u
    ^Z

     DATA OUTPUT

    Welcome to GPN
    hello how r u
*/
