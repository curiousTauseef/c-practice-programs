#include<stdio.h>
void odd(int n)
{
if(n>1)
{
if(n%2!=0)
{
printf("%d\n",n);
}
odd(n-1);

}
else
{
printf("1\n");
}
}
void even(int n)
{
if(n>2)
{
if(n%2==0)
{
printf("%d\n",n);
}
even(n-1);
}
else
{
printf("2\n");
}
}
int main()
{
int n;
scanf("%d",&n);
printf("odd \n");
odd(n);
printf("even \n");
even(n);
return 0;
}
