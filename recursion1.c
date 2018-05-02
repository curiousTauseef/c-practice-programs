#include<stdio.h>
int addnumbers(int n)
{
if(n==0)
return n;
else
return n+addnumbers(n-1);
}

int main()
{
int n,ans;
scanf("%d",&n);
ans=addnumbers(n);
printf("%d ",ans);


}
