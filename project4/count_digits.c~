//this program will use a two-dimensional array containing only digits between 0 and 9, then counts the number of times each digit appears in the array

#include <stdio.h>

//read in each row as a parameter
void read_row (int x, int y, int array[x][y])
{
	int j, k, temp;

	for (j = 0; j < x; j++)
	{
		printf("enter a digit for each of the elements in the row %d, followed by a space: ", j+1);
		for (k = 0; k < y; k++)
		{
			scanf("%d", &array[j][k]);
			temp = check_input(array[j][k]);

			//checks to see if the value given is within range
			switch (temp)
			{
				case 0:
				printf("the accepted range is only 0-9\n");
				j--;
				break;
				
			}
		}
	}
	
}

//verifies that the user has not entered values outside the range
int check_input (int temp)
{
	if (temp < 0 || temp > 9)
	{
		return 0;
	}
	
	return 1;
}

//counts the number of time each digit occurs in an invidivual row
void compute_row_count (int a, int b, int array[a][b], int temp[10])
{
	int j, k;

	for (j = 0; j < a; j++)
	{
		for (k = 0; k < b; k++)
		{
			temp[array[j][k]] += 1;
		}
	}
}

//prints out the total count for each digit
void print_total (int temp[10])
{
	int j;
	
	for(j = 0; j < 10; j++)
	{
		printf("%d repeats %d times \n", j, temp[j]);
	}
}

//the main program that is utilizing the predefined functions
int main(void)
{
	//intialize variables
	int row, col, x;

	//asks the user for the size of the two dimensional array
	printf("enter the integer value for the amount of rows, then a space, followed by the amount of columns: ");
	scanf("%d %d", &row, &col);

	//initialize the array using the given values
	int array[row][col];

	//calls in a function that inputs the element values
	read_row(row, col, array);

	//sets all elements of array to 0
	int temp [10];
	for (x = 0; x < 10; x++)
	{
		temp[x] = 0;
	}

	//calls the remaining functions to compute and then print
	compute_row_count (row, col, array, temp);
	print_total (temp);

	printf("\n");

	return 0;
}
