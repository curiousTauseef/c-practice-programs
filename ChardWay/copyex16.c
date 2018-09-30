#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>

struct Person
{
char *name;
int age;
int height;
int weight;
};

struct Person *Person_create(char *name,int age,int height,int weight)
{
struct Person *who=malloc(sizeof(struct Person));

assert(who!=NULL);

who->name=strdup(name);
who->age=age;
who->height=height;
who->weight=weight;

return who;
}

void Person_delete(struct Person *who)
{
assert(who!=NULL);

free(who->name);
free(who);
}

void Person_print(struct Person *who)
{
assert(who!=NULL);
printf("NAME : %s\n",who->name);
printf("AGE : %d\n",who->age);
printf("HEIGHT : %d\n",who->height);
printf("WEIGHT : %d\n",who->weight);
}

int main()
{
struct Person *munks=Person_create("Mayank Singh",19,175,75);

//printing
Person_print(munks);

//new data
munks->age+=1;
munks->weight+=5;

//new print
Person_print(munks);

//freeing
Person_delete(munks);
return 0;
}
