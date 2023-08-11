#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	int fd;
	fd = open(STDOUT_FILENO, O_RDWR);
	write(fd, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
