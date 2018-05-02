#include<stdio.h>
int fun(int x)
{
return x*x*x;
}
int main()
{
int x,cube;
scanf("%d",&x);
cube=fun(x);

printf("%d",cube);
}
