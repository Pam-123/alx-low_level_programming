#include "dog.h"

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	free(myDog->name);
	free(myDog->owner);
	free(myDog);
}
