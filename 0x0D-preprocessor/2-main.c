#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the name of
 * the file it was compiled from
 *
 * Return: always 0
 */

int main(void)
{
	printf("The name of the file it was compiled from is : %s\n",__FILE__);
	return (0);
}
