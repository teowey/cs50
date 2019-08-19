#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

// strlen.c: program to receive a string a print the chars with their ASCII code
int main () 
{
	string str = get_string ("Enter name: ");
	
	int str_len = strlen (str);
	
	printf ("Each letter and ASCII: \n");
	for (int i = 0; i < str_len; i++)
	{
		printf ("%c %i\n", str[i], str[i]);
	}
	
	printf ("\n");
	printf("ALL CAPS: ");
	for (int i = 0; i < str_len; i++)
	{
		printf ("%c", toupper (str[i]));
	}
	
	printf ("\n");
	return 0;
}