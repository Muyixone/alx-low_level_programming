#ifndef pet_dog
#define pet_dog
/**
  * struct dog - A structore for a poppy
  * @name: The name of the dog
  * @age: The dog's age
  * @owner: The name of the dog's owner
  *
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
