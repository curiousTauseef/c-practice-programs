#include<stdio.h>
int checktriangle(int a,int b,int c)
{
if(a+b>c && b+c>a && a+c>b)
return 1;
else 
return 0;
}
int main()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if(checktriangle(a,b,c)==1)
{
if (a==b && a==c && b==c)
printf("equilateral");
else if(a!=b && a!=c && b!=c)
printf("scalene");
else 
printf("isoceles");
}
else
{
printf("not valid input");
}
return 0;
}
