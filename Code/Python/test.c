#include <stdio.h>

int function_a()
{
    int a = 10;
    return a;
}

int function_b()
{
    int a = -6;
    return a;
}


int function_c()
{
    int a = 2;
    return a;
}

int main()
{
    int a = 5;
    printf("a: %d\n", a);
    a = function_a();
    printf("a: %d\n", a);

    a=function_b();
    printf("a: %d\n", a);

    a=function_c();
    printf("a: %d\n", a);
}