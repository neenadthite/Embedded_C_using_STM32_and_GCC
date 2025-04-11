/*
 * main_new.c
 *
 *  Created on: Apr 3, 2025
 *      Author: ninadthite
 */
#include <stdio.h>

int main()
{
	double number1, number2, number3;
	double average;

	printf("Enter three numbers: ");
	scanf("%lf %lf %lf",&number1,&number2,&number3);

	average = (number1 + number2 + number3)/3;
	printf("\nAverage is : %lf\n",average);

	printf("Press enter key to exit the application \n");
	while(getchar()!='\n')
	{
		//just read the input buffer and do nothing
	}
	getchar();
}
