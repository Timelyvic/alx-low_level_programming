#include <unistd.h>
#include <string.h>
#include <errno.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 1 (indicating an error)
 */
int main(void)
{
const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

if (write(STDERR_FILENO, message, strlen(message)) == -1)
	{
		write(STDERR_FILENO, strerror(errno), strlen(strerror(errno)));
		return (1);
	}

	return (1);
}

