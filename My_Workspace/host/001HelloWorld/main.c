/*
 * main.c
 *
 *  Created on: Mar 15, 2025
 *      Author: ninadthite
 */
#include<stdio.h>

int a;

int main()
{
	a = 25;
	{
		int my_var;
		my_var=45;
		printf("\n001 Value of my_var = %d",my_var);
		printf("\n002 Value of a = %d",a);
	}
	int my_var;
	my_var = my_var + 10;
	printf("\n003 Value of my_var = %d",my_var);
	return 0;
}
