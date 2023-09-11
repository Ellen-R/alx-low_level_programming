#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a dog's characteristics
 * @name: Name of the dog (string)
 * @age: Age of the dog (float)
 * @owner: Owner of the dog (string)
 *
 * Description: This struct defines a dog's attributes
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_type - typedef for struct dog
 */
typedef struct dog dog_type;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);


#endif
