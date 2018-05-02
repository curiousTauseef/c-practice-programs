#include<stdio.h>
int sum(int n)
{
if(n==1)
return 1;
else
return n+sum(n-1);
}
int main()
{
int n,answer;
scanf("%d",&n);
answer=sum(n);
printf("answer : %d",answer);
}
