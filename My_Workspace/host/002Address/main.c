/*
 * main.c
 *
 *  Created on: Mar 20, 2025
 *      Author: ninadthite
 */

#include <stdio.h>

int main()
{
    char a1 = 'A';
    char a2 = 'p';
    char a3 = 'p';
    char a4 = 'l';
    char a5 = 'e';
    char a6 = ':';
    char a7 = ')';

    unsigned long int addressOfa1 = (unsigned long int)&a1;
    unsigned long long int addressOfa2 = (unsigned long long int)&a2;

    printf("Address of variable a1 = %lu\n",addressOfa1);
    printf("Address of variable a2 = %I64X\n",addressOfa2);
    printf("Address of variable a3 = %p\n",&a3);
    printf("Address of variable a4 = %p\n",&a4);
    printf("Address of variable a5 = %p\n",&a5);
    printf("Address of variable a6 = %p\n",&a6);
    printf("Address of variable a7 = %p\n",&a7);

    return 0;
}
