/*
 * main.c
 *
 *  Created on: Apr 14, 2025
 *      Author: ninadthite
 */

#include <stdio.h>

int main(void)
{
	float num1, num2;
	printf("\nEnter the first number:");
	scanf("%f",&num1);

	printf("\nEnter the second number:");
	scanf("%f",&num2);


	long int n1, n2;
	n1=num1;
	n2=num2;

	if(n1==n2)
		printf("\nNumbers match");
	else if(n1 < n2)
		printf("\n%ld is greater than %ld",n2,n1);
	else
		printf("\n%ld is greater than %ld",n1,n2);

	printf("\nPress enter key to exit the application.");
	while(getchar() != '\n')
	{
		//just read the input buffer and do nothing
	}
	getchar();
	return 0;
}

