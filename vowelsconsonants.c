#include<stdio.h>
int main()
{
char str[100],count1=0,count2=0;
int i,j;
printf("enter a string: \n");
gets(str);
for(i=0;str[i];i++);
for(j=0;j<i;j++)
{
if(str[j]=='a'|| str[j]=='e' || str[j]=='i' || str[j]=='o' || str[j]=='u' || str[j]=='A' || str[j]=='E' || str[j]=='I' || str[j]=='O' || str[j]=='U')
{
count1++;
}
else if(str[j]!=' ')
{
count2++;
}
}
printf("%d vowels :",count1);
printf("%d consonants :",count2);

return 0;
}

