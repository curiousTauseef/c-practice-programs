#include<stdio.h>
#include<stdlib.h>
int main()
{

FILE *pt;

pt=fopen("israni.txt","w");

char str[]="israni jhuta hai";

fputs(str,pt);


fclose(pt);

return 0;

}
