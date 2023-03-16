#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the size of various types on the computer it is compiled
 *              and run on.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of a char: %zu byte(s)\n", sizeof(char));
printf("Size of an int: %zu byte(s)\n", sizeof(int));
printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
printf("Size of a float: %zu byte(s)\n", sizeof(float));
#ifdef __LP64__
printf("Size of a double: %zu byte(s)\n", sizeof(double));
printf("Size of a long double: %zu byte(s)\n", sizeof(long double));
#else
printf("Size of a double: %zu byte(s)\n", sizeof(double));
printf("Size of a long double: %zu byte(s)\n", sizeof(long double));
#endif
printf("Size of a uint32_t: %zu byte(s)\n", sizeof(uint32_t));
printf("Size of a uint64_t: %zu byte(s)\n", sizeof(uint64_t));

return (0);
}




