/*
 * type_cast.c
 *
 *  Created on: Mar 23, 2025
 *      Author: ninadthite
 */

#include <stdio.h>

int main(void)
{
	unsigned char data = (unsigned char)(0x87 + 0xFF00);
	float result1 = (float)80/3;
	printf("Data : %u result : %f \n", data, result1);
	float result2 = 80/(float)3;
	printf("Data : %u result : %f \n", data, result2);
	unsigned char data1 = 0x1FFFFFFFA0B0 + 0x1245;//warning 'long long int' to 'unsigned char'
}
