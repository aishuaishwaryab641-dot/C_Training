//write a c program which will add three numbers call and reference
#include <stdio.h>
void addition (int *a,int *b,int *c)
{
    int add = (*a+*b+*c);
    printf("%d\n",add);
}
void main()
{
    int a =3;
    int b =4;
    int c =4;
    printf("call by reference");
    addition(&a,&b,&c);
}