//this program will prompt the user for a sentence and reverse them while shifting all letter in each word by two positions to the right.

#include <stdio.h>
#define N 50

int main(void)
{
	//variable declaration
	int i = 0, j = 0;
	char a[N];

	//asks for user input
	printf("enter a sentence that ends with '.', '?' or '!' \n");
	
	//scans into array
	for (i = 0; a[i] != '.'&& a[i] != '?'&& a[i] != '!' && a[i] != '\n'; i++)
	{
		a[i] = getchar();

		if (a[i] == '\n')
		{
			break;
		}

	}
	//removes the next line from the array
	i = i-1;

	//prints the array
	for (j = i; j >= 0; j--)
	{
		putchar(a[j]);
	}
	
	printf("\n");

	return 0;
}
