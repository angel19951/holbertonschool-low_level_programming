#ifndef DOG_H
#define DOG_H
/**
 * struct dog - prints info of the dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
dog_t
;


/* 1. init_dog function prototype */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* 2. print_dog function prototype */
void print_dog(struct dog *d);

/* 4.create a new dog function prototype */
dog_t *new_dog(char *name, float age, char *owner);
int _strlength(char *str);
char *_strcpy(char *str);
/*_putchar function prototype*/
int _putchar(char c);
#endif
