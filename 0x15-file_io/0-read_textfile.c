#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: file name
 * @letters: size
 * Return: ssize_t
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd, count;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	count = read(fd, buf, letters);
	if (count == -1)
		return (0);
	if (write(1, buf, letters) == -1)
		return (0);
	close(fd);
	free(buf);

	return (count);
}
