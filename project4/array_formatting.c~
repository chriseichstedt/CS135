//this program takes a two dimensional array of integers and prints it out formatted according to user defined specifications

#include <stdio.h>

//reads in each row as a parameter
void read_row (int x, int y, int array[x][y], int count)
{
	int j, k, temp;

	for (j = 0; j < x; j++)
	{
		printf("enter a digit for each of the elements in the row %d, followed by a space: ", j+1);
		for (k = 0; k < y; k++)
		{
			scanf("%d", &array[j][k]);
			temp = check_formatting(array[j][k]);

			//checks to see if the value given is within the array element range
			if (temp > count)
			{
				printf("the row is %d digits longer than given elements\n", count);
				j--;
			}
		}
	}
	
}

//formats and prints an invidual row based on specifications using pointers
void format_row (int *next_line, int *quantity, char *ch, char *align)
{
	printf("enter how many lines in between the rows: ");
	scanf("%d", next_line);

	printf("enter the range for each array element: ");
	scanf("%d", quantity);

	printf("enter a character that you would like at the end of an element: ");
	scanf(" %c", ch);

	printf("enter either 'l' or 'r' to determine the alignment of the justification: ");
	scanf(" %c", align);
}

//prints the entire array
void print_array (int row, int col, int array[row][col], int next_line, int quantity, char ch, char align)
{
	int a, b, c, d, e;

	for(a = 0; a < row; a++)
	{
		for(b = 0; b < col; b++)
		{
			c = check_formatting(array[a][b]);

			//decides whether to put the desired character on the left or right 
			switch (align)
			{
				case 'r':
				{
					printf("%d", array[a][b]);
					printf("%c", ch);
				
					for(d = 0; d <= quantity && d <= c; d++)
					{
						printf("^");
					}
					break;
				}
		
				case 'l':
				{
					for(d = 0; d <= quantity && d <= c; d++)
					{
						printf("^");
					}
					
					printf("%d", array[a][b]);
					printf("%c", ch);
					break;
				}

			}	
		}
		
		for(e = 0; e < next_line; e++)
		{
			printf("\n");
		}
	}

}

//checks the feasibility of the formatting specifications
int check_formatting (int x)
{
	int temp1, temp2 = x;

	for (temp1 = 0; temp2 != 0; temp1++)
	{
		temp2 /= 10;
	}
	
	return temp1;

}

//the main program that prompts the users for the initial values and then calls the functions to format them
int main(void)
{
	//initializes the variables for the main program
	int row, col, next_line, quantity;
	char ch, align;

	//asks the user for the amount of rows and columns desired and then scans them into their respected variables
	printf("give a value for the amount of rows, followed by a space and then the amount of columns: ");
	scanf("%d %d", &row, &col);
	
	//intializes the array containing the desired row and column count
	int array[row][col];

	//calls the functions that read, format and prints the array
	read_row (row, col, array, quantity);
	format_row(&next_line, &quantity, &ch, &align);
	print_array(row, col, array, next_line, quantity, ch, align);

	return 0;
}
