/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void myFun1(void);
int main()
{
    myFun1();
    myFun1();
    myFun1();
    myFun1();

    return 0;
}

void myFun1(void)
{
    static int count = 0;

    count = count + 1;
    printf("This function executed %d time(s)\n",count);
}