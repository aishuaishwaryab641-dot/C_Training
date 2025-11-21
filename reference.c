//write a function which will multiply three numbers called it by reference
#include <stdio.h>
void product(int *a,int *b,int *c)
{
    int pro = (*a)*(*b)*(*c);
    printf("%d\n",pro);
} 
void main()
{
    int a=2;
    int b=3;
    int c=4;
    printf("call by reference");
    product(&a,&b,&c);
}