/*
 * main.c
 *
 *  Created on: Mar 23, 2025
 *      Author: ninadthite
 */
#include <stdio.h>
#include "math.h"

int main(void)
{
	printf("Add : %X\n",math_add(0x0FFF1111,0x0FFF1111));
	printf("Mul : %X\n",math_mul(0x0FFF1111,0x0FFF1111));
	printf("Div : %f\n",math_div(100,20));

	return 0;
}
