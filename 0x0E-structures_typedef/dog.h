#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a collection of dog poperties
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog owner
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
/*A new name of dog with the properties of the foormer*/
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
