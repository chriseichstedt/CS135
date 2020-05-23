//this program is going to take a command line argument using an input qualifier and an operation mode. then saves it under a user specified file name performs certain actions.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error!\nIncorrect number of arguments.\nPlease try Again.\n");
		return 0;
	}

	if (argv [1][0] != '-' || argv[1][1] != 'c' && argv[1][1] != 'n')
	{
		printf("Error!\nPlease retry using either argument:\n'-c' for character array,\n'-n' for integer array.\n");
		return 0;
	}

	else if (argv [2][0] != '-' || argv[2][1] != 'a' && argv[2][1] != 'o')
	{
		printf("Error!\nPlease retry using either argument:\n'-a' for append,\n'-o' for overwrite.\n");
		return 0;
	}

	if (argv[1][1] == 'c')
	{
		FILE *fileopen;

		int sizeOf;
		printf("Please enter the size of the character array: ");
		scanf("%d", &sizeOf);

		char *array = (char *) malloc(sizeOf+1);
		printf("Please enter the string: ");
		scanf("%s", array);

		if(argv[2][1] == 'a')
		{
			fileopen = fopen(argv[3], "a+");
		}

		else if (argv[2][1] == 'o')
		{
			fileopen = fopen(argv[3], "w+");
		}
		
		int length = strlen(array);
		
		for (int i = 0; i < length; i++)
		{
			fprintf(fileopen, "%c", array[i]);
		}
		
		fprintf(fileopen, "\n");
		fclose (fileopen);
		free(array);
	}

	else if (argv[1][1] == 'n')
	{
		FILE *fileopen;

		int sizeOf;
		printf("Please enter the size of the integer array: ");
		scanf("%d", &sizeOf);

		int *array = (int *) malloc(sizeOf+1);
		printf("Please enter the numbers: ");

		for(int i = 0; i < sizeOf; i++)
		{
			scanf("%d", &array[i]);
		}	
	
		if(argv[2][1] == 'a')
		{
			fileopen = fopen(argv[3], "a+");
		}

		else if(argv[2][1] == 'o')
		{
			fileopen = fopen(argv[3], "w+");
		}
		
		for (int i = 0; i < sizeOf; i++)
		{
			fprintf(fileopen, "%d", array[i]);
		}
		
		fprintf(fileopen, "\n");
		fclose (fileopen);
		free(array);
	}
	return 0;
}
