#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

struct Person
{
char *name;
int age;
int height;
int weight;
};


struct Person *Person_create(char *name,int age,int height,int weight)
{
//using malloc for memory allocation 
struct Person *who=malloc(sizeof(struct Person));
//assert checks if valid piece of memory is back from malloc, NULL is invalid pointer
assert(who!=NULL);
//using who-> to point at what part of struct to initialize..
//strdup duplicates the string into the struct's name 
//duplicated strings refrence is now with name owned by struct
who->name=strdup(name);
who->age=age;
who->height=height;
who->weight=weight;

return who;

}

void Person_destroy(struct Person *who)
{
//assert is use to make sure there is no input
assert(who!=NULL);
//free is used to return memory which was allocated by malloc and strdup
//if this is not done we will get memory leak
free(who->name);
free(who);
}

void Person_print(struct Person *who)
{
printf("Name : %s\n",who->name);
printf("\tAge : %d\n",who->age);
printf("\tHeight : %d\n",who->height);
printf("\tWeight : %d\n",who->weight);
}
int main()
{
struct Person *joe=Person_create("Joe Alex",32,64,140);
//struct Person *joe=NULL;
struct Person *frank=Person_create("Frank Blank",20,72,180);

printf("Joe is in memory location %p: \n",joe);
Person_print(joe);

printf("Frank is in memory location %p: \n",frank);
Person_print(frank);

joe->age+=20;
joe->height-=2;
joe->weight+=40;
frank->age+=20;
printf("Person JOE\n");
Person_print(joe);
printf("Person FRANK\n");
Person_print(frank);
//destroying them
Person_destroy(joe);
Person_destroy(frank);

return 0;
}
