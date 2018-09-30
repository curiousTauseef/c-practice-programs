#include<stdio.h>
#include<stdlib.h>

int main()
{

FILE *fp;

fp=fopen("file.txt","r");

char str[20];

while(fgets(str,20,fp)!=NULL)
{
puts(str);
}

fclose(fp);

return 0;
}
