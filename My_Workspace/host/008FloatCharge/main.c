/*
 * main.c
 *
 *  Created on: Apr 3, 2025
 *      Author: ninadthite
 */
#include <stdio.h>

int main(void)
{
	double charge, chargeE;
	double electrons;
	printf("Enter the charge: ");
	scanf("%lf",&charge);

	printf("Enter the charge of electron: ");
	scanf("%le",&chargeE);

	electrons = (charge/chargeE)* -1;
	printf("Total number of electrons = %le\n",electrons);
	printf("Total number of electrons = %lf\n",electrons);
}
