/*
 * function.c
 *
 *  Created on: Mar 23, 2025
 *      Author: ninadthite
 */

#include <stdio.h>


int function_add_numbers(int ,int ,int );
int main()
{
	int retValue;
	//retValue = function_add_numbers(12,13,14);
	//function_add_numbers(-20,-20,13);

	int valueA= 90, valueB= 70;
	retValue = function_add_numbers(valueA,valueB,90);
	printf("Sum = %d\n",retValue);
	return 0;
}

//This is function definition
int function_add_numbers(int a, int b, int c)
{
	int sum;
	sum = a+b+c;
	printf("Sum = %d\n",sum);
	return sum;
}
