#ifndef DOG_H
#define DOG_H
/**
  *struct dog - info about the dog
  *@name: input
  *@age: input
  *@owner: input
  *Description: longer desc
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
  *dog_t - struct dog typedef
  */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
