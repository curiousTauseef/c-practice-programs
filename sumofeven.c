#include<stdio.h>
int sumofeven(int n)
{
if(n==0)
return 0;
else if(n%2==0)
return n+sumofeven(n-2);
else
return sumofeven(n-1);
}
int main()
{
int n,answer;
scanf("%d",&n);
answer=sumofeven(n);
printf("%d : ",answer);
}
