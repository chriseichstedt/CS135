//this program works as a 20 year compound interest calculator

#include <stdio.h>

int main()
{
	//intializing variable values	
	int year = 1;
	float percentage, total;

	//ask for user input
	printf("please enter the amount of principal: ");
	scanf("%f", &total);

	printf("please enter an interest percentage: ");
	scanf("%f", &percentage);

	//the compound interest loop
	while (year <= 20)
	{
		total = percentage * total / 100 + total;
		printf("%d. $%.2f \n", year, total);
		year++;
	}

	return 0;
}
