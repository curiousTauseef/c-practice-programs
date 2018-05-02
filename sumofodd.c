#include<stdio.h>
int sumofodd(int n)
{
if(n<=0)
return 0;
else if(n%2!=0)
return n+sumofodd(n-2);
else
return sumofodd(n-1);
}
int main()
{
int n,answer;
scanf("%d",&n);
answer=sumofodd(n);
printf("%d",answer);
}
