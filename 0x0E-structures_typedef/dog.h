/**
 * struct dog - Defines a dog structure
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Description: This structure defines a dog and contains information about
 *              its name, age, and owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */

typedef struct dog dog_t;

/**
 * init_dog - Initializes a dog structure
 * @d: Pointer to the dog structure to initialize
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Description: This function initializes a dog structure with the given name,
 *              age, and owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - Prints information about a dog
 * @d: Pointer to the dog structure to print
 *
 * Description: This function prints the name, age, and owner of a dog structure.
 */

void print_dog(struct dog *d);

/**
 * new_dog - Creates a new dog structure
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: Pointer to the new dog structure
 *
 * Description: This function creates a new dog structure with the given name,
 *              age, and owner, and returns a pointer to it.
 */

dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - Frees a dog structure
 * @d: Pointer to the dog structure to free
 *
 * Description: This function frees the memory allocated for a dog structure.
 */

void free_dog(dog_t *d);

/**
 * _strcpy - Copies a string to a buffer
 * @dest: Pointer to the buffer to copy to
 * @src: Pointer to the string to copy
 *
 * Return: Pointer to the buffer
 *
 * Description: This function copies the string pointed to by src to the buffer
 *              pointed to by dest.
 */

char *_strcpy(char *dest, char *src);

/**
 * _strlen - Computes the length of a string
 * @s: Pointer to the string to compute the length of
 *
 * Return: The length of the string
 *
 * Description: This function computes the length of the string pointed to by s.
 */

int _strlen(char *s);

#endif /* DOG */


