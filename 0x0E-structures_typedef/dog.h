#ifndef DOG_HEADER
#define DOG_HEADER

/**
 * struct dog - about dog
 * @name: dog's name
 * @age: age in float
 * @owner: name of owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
