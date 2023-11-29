#include<stdio.h>
#include"swap.h"

void main()
{
    int a=20;
    int b=30;
    swap (&a,&b);
    printf ("a=%d\n", a);
    printf ("b=%d\n",b);
}