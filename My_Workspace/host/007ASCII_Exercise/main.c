/*
 * main.c
 *
 *  Created on: Apr 3, 2025
 *      Author: ninadthite
 */

#include <stdio.h>

int main(void)
{
	char c1,c2,c3,c4,c5,c6;
	printf("Enter six characters: ");
	scanf("%c %c %c %c %c %c",&c1,&c2,&c3,&c4,&c5,&c6);

	printf("ASCII codes: %u %u %u %u %u %u",c1,c2,c3,c4,c5,c6);


	printf("Press enter key to exit the application \n");
	while(getchar()!='\n')
	{
		//just read the input buffer and do nothing
	}
	getchar();
}
