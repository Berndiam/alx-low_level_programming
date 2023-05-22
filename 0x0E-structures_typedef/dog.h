#ifndef DOG_H
#define DOG_H

/**
* struct dog - Contains a dog's basic info
* @name: The first mem
* @age: The 2nd member
* @owner: The third memb
*
* Description: A longer description
*/

struct dog
	{
		char *name;
		float age;
		char *owner;
	};


	/**
	 * dog_t - Use of typedef for the structure of dog
	 */

typedef struct dog dog_t;

char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
int _strlen(char *s);
void free_dog(dog_t *d);

#endif
