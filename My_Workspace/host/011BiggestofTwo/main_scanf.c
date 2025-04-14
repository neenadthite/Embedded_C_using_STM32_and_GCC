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
	if (scanf("%f",&num1) == 0){
		printf("invalid input! Exiting..\n");
		wait_for_user_input();
		return 0;
	}

	printf("\nEnter the second number:");
	if (scanf("%f",&num2) == 0){
		printf("invalid input! Exiting..\n");
		wait_for_user_input();
		return 0;
	}

	printf("\nEnter the second number:");
	scanf("%f",&num2);

	if(num1==num2)
		printf("\nNumbers match");
	else if(num1 < num2)
		printf("\n%ld is greater than %ld",num2,num1);
	else
		printf("\n%ld is greater than %ld",num1,num2);

	return 0;
}

void wait_for_user_input()
{
	printf("\nPress enter key to exit the application.");
	while(getchar() != '\n')
	{
		//just read the input buffer and do nothing
	}
	getchar();
	return 0;
}
