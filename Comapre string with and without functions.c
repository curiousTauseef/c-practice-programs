/* Comparing two strings */
#include<stdio.h>
#include<string.h>
int main()
{
char a[100],b[100],c[100];
gets(a);
gets(b);
if(strcmp(a,b)==0)
{
printf("Equal Strings");
}
else
{
printf("unequal strings");
}

}
