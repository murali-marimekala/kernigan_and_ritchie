//Write a program to copy its input to its output, replacing each
//tab by \t, each blank space by \b, and each backslash by \\. This makes 
//tabs and backspaces visible in a unambiguous way.

#include <stdio.h>

int main()
{	
	int c;
	while((c=getchar()) != EOF)
	{
		if(c == '\t')
		{
			printf("\\t");
		}
		else if( c == '\b')
		{
			printf("\\b");
		}
		else if( c == '\\')
		{
			printf("\\\\");
		}
		else
		{
			putchar(c);
		}
		
	}
	
	return 0;
}
