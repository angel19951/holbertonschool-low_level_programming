#ifndef DOG_H
#define DOG_H

/**
 * struct dog - prints info of the dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* 1. init_dog function prototype */
;
void init_dog(struct dog *d, char *name, float age, char *owner);

/* 2. print_dog function prototype */
void print_dog(struct dog *d);
#endif
