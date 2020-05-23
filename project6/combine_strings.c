//this program takes two user created strings and gives the option to "intersperse" or "widen_stars"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define STR_LEN 30

void intersperse ()
{
	char stringA[STR_LEN + 1];
	char stringB[STR_LEN + 1];
	
	printf("Please enter a string of maximum 30 characters: ");
	scanf("%s", stringA);
	
	printf("Please enter a string of maximum 30 characters: ");
	scanf("%s", stringB);

	int lengthA = strlen (stringA);
	int lengthB = strlen (stringB);

	char *p = (char*) malloc (lengthA + lengthB + 1);

	char *r = stringA;
	char *s = stringB;
	char *home = p;

	while (*r != '\0' || *s != '\0')
	{ 
		if (*r != '\0')
		{
			*p = *r;
			p++;
			r++;
		}
		if (*s != '\0')
		{
			*p = *s;
			p++;
			s++;
		}
	}

	*p = '\0';

	printf("%s\n", home);
	free(home);
}

void widen_stars ()
{
	char stringA[STR_LEN + 1];
	char stringB[STR_LEN + 1];
	
	printf("Please enter a string of maximum 30 characters: ");
	scanf("%s", stringA);
	
	printf("Please enter a string of maximum 30 characters: ");
	scanf("%s", stringB);

	int lengthA = strlen (stringA);
	int lengthB = strlen (stringB);

	char *p = (char*) malloc ((lengthA + lengthB) * 2 + 1);

	char *r = stringA;
	char *s = stringB;
	char *home = p;

	while (*r != '\0')
	{ 
		*p = *r;
		p++;
		r++;
		*p = '*';
		p++;
	}
	while (*s != '\0')
	{
		*p = *s;
		p++;
		s++;
		*p = '*';
		p++;
	}

	*p = '\0';

	printf("%s\n", home);
	free(home);

}

int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		printf("Error!\nIncorrect number of arguments.\nPlease try Again.\n");
		return 0;
	}

	if (argv [1][0] != '-' || argv[1][1] != 'i' && argv[1][1] != 'w')
	{
		printf("Error!\nPlease retry using either argument:\n'-i' for intersperse,\n'-w' for widen stars.\n");
		return 0;
	}

	if (argv[1][1] == 'i')
	{
		intersperse();	
	}

	else if (argv[1][1] == 'w')
	{
		widen_stars();
	}

	return 0;
}
