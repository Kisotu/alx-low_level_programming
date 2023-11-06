#ifndef DOG_HEADER
#define DOG_HEADER

/**
 * struct dog - a dog's identity
 * @name: dogs name, first member
 * @age: dog's age, second member
 * @owner: dog's owner, third member
 * Description: a struct to hold a dogs data items
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
