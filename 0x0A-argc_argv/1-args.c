#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arg in the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, void *argv[])
{
	printf("%s\n", argc - 1);
	return (0);
}
