/*
 * main.c
 *
 *  Created on: Apr 14, 2025
 *      Author: ninadthite
 */

#include <stdio.h>

int main(void)
{
	int min_age = 18, voter_age=0;;
	printf("Enter voter Age: \n");
	scanf("%d",&voter_age);

	if(voter_age >= min_age)
		printf("\nEligible to vote");
	else
		printf("\nNot Eligible to vote");
	return 0;
}

