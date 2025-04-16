/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    long long myLongHistory=900;
    char size = sizeof(myLongHistory);
    
    printf("Size of char data type = %d\n",sizeof(char));
    printf("Size of short data type = %d\n",sizeof(short));
    printf("Size of int data type = %d\n",sizeof(int));
    printf("Size of long data type = %d\n",sizeof(long));
    printf("Size of long long variable type = %d\n",size);
    
    return 0;
}
