#include<stdio.h>
long long int fact(int n)
{
if(n>=1)
return n*fact(n-1);
else
return 1;
}
int main()
{
int n;
long long int fa;
scanf("%d",&n);
fa=fact(n);
printf("factorial of %d : %lld",n,fa);
}
