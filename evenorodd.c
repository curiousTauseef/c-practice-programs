#include<stdio.h>
void even(int n)
{
if(n==0)
return;
even(n-1);
if(n%2==0)
printf("%d\n",n);
}
void odd(int n)
{
if(n==0)
return;
odd(n-1);
if(n%2!=0)
printf("%d\n",n);
}
int main()
{
int n;
scanf("%d",&n);
printf("---- EVEN ----\n");
even(n);
printf("---- ODD ----\n");
odd(n);

return 0;
}
