#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	const char* message = "and that piece of art is useful\" - Dora Korpar, \2015-10-19\n";
	const int message_length = 50;
	const int stderr_fd = 2;
	write(stderr_fd, message, message_length);

  return 1;
}
