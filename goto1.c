#include<stdio.h>

void odd()
{
    printf("hello");

    next:
    printf("next is executed");

    printf("statement1 executed");

    goto next;
}
int main()
{
    odd();
    return 0;
}