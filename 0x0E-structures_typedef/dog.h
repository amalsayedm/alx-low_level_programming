#ifndef DOG_H
#define DOG_H

/*
 * File: dog.h
 * Auth: Amal sayed
 * Desc: Header file
 */

/**
 * struct dog - A new datatype describing a dog.
 * @name: The name
 * @age: age of the dog.
 * @owner: The owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
