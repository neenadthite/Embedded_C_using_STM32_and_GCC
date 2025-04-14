/*
 * main.c
 *
 *  Created on: Apr 14, 2025
 *      Author: ninadthite
 */

#include <stdio.h>
#include <stdint.h>

int main(void)
{
	int min_age = 18, voter_age=0;;
	printf("Enter voter Age: \n");
	scanf("%d",&voter_age);

	if(voter_age >= min_age)
		printf("\nEligible to vote\n");
	else
		printf("\nNot Eligible to vote\n");

	printf("Press enter key to exit the application");

	while(getchar() != '\n')
	{
		//just read the input buffer and do nothing
	}
	getchar();

	return 0;
}

