#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - dog structure
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Long Desc
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
#endif
