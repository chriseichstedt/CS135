//this is a program in which it converts the rate of speed, miles per hour, into meters per second

#include <stdio.h>

int main(void)
{
	//declare the floating point variable to be converted	
	float x, y;
	
	//asks for the value to be converted
	printf("please enter a speed in miles per hour: ");
	scanf("%f", &x);

	//convert miles per hour to meters per second	
	y = (x * 0.44704);

	//print value
	printf("%.2f mph is ", x);
	printf("%.2f m/s \n", y);

	return 0;
}
