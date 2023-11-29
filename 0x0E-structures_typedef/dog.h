#ifndef pet_dog
#define pet_dog
/**
  * struct dog - A structore for a poppy
  * @name: The name of the dog
  * @age: The dog's age
  * @owner: The name of the dog's owner
  *
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strdup(char *str);
void free_dog(dog_t *d);
#endif
