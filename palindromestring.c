#include<stdio.h>
#include<string.h>
int main()
{
char str[100],rev[100],count=0;
int i,j;
gets(str);
for(i=0;str[i];i++);
for(j=0;j<i;j++)
{
rev[j]=str[i-j-1];
}
for(j=0;j<i;j++)
{
if(str[j]==rev[j])
{
count++;
}
}
puts(str);
puts(rev);
if(count==i)
{
printf("String is a Palindrome");
}
else
{
printf("String is not a Palindrome");
}
return 0;
}
