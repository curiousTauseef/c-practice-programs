#include<stdio.h>
int main()
{
char str[100],rev[100],count2=0;
int i,j;
gets(str);
for(i=0;str[i];i++);
for(j=0;j<i;j++)
{
rev[j]=str[i-j-1];
}
printf("reversed string is : ");
puts(rev);
return 0;
}

