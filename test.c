// C program to demonstrate the pointer pointing to local
// variable becomes dangling when local variable is not
// static.
#include <stdio.h>
#include <stdlib.h>

char* fun()
{
    // x is local variable and goes out of
    // scope after an execution of fun() is
    // over.
 static char a = 97;

    return &a;
}

// Driver Code
int main()
{

    char* p = fun();


    // p points to something which is not
    // valid anymore
    printf("%c", *p);
    return 0;
}