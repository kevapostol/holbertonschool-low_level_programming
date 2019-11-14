#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

/**
 * err - prints out an error message to stderr
 * @msg: message string
 * @file: file string
 * @status: int status for exit
 * Return: no Return value
 */
void err(char *msg, char *file, int status)
{
	dprintf(STDERR_FILENO, "%s %s\n", msg, file);
	exit(status);
}

/**
 * main - main file
 * @argc: argument count
 * @argv: argument vector
 * Return: no Return value
 */
int main(int argc, char **argv)
{
	char buffer[1024];
	ssize_t fd_from, fd_to;
	ssize_t rc, wc, cc;

	if (argc != 3)
		err("Usage: cp", argv[1], 97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		err("Error: Can't open file", argv[1], 96);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_from == -1)
		err("Error: Can't open file", argv[2], 96);

	do {
		rc = read(fd_from, buffer, 1024);
		/*check*/
		if (rc == -1)
		err("Error: Can't read from file", argv[1], 98);

		wc = write(fd_to, buffer, rc);
		/*check*/
		if (wc == -1)
		err("Error: Can't write to", argv[2], 99);

	} while (rc == 1024);

	cc = close(fd_from);
	/*check*/
	if (cc == -1)
	{
		dprintf(STDERR_FILENO,"Error: Can't close fd %d", (int) fd_from);
		exit(100);
	}
	cc = close(fd_to);
	/*check*/
	if (cc == -1)
	{
		dprintf(STDERR_FILENO,"Error: Can't close fd %d", (int) fd_to);
		exit(100);
	}

	return (0);
}
