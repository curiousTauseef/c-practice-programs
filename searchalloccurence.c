//16 && 17
#include<stdio.h>
#include<string.h>
int main()
{
char c[100],s,r;
int i,j,index[100],k=0;
printf("enter a string : ");

gets(c);

printf("enter a character to find occurence of : ");

scanf("%c",&s);

for(i=0;c[i];i++);
for(j=0;j<i;j++)
{
if(c[j]==s)
{
k++;
printf("Index : %d \n",j);
c[j]='r';
}
}
printf("Count : %d\n",k);
puts(c);
return 0;
}
