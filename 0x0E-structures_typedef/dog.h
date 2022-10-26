#ifndef DOG_H
#define DOG_H

/**
 * struct dog - best friend of humankind
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 * Description: this struct is for dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for dog structure
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
