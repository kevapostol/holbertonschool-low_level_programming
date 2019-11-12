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
	int fd;
	ssize_t count, w_count;

	if (filename == NULL)
		return (0);

	buf = malloc((sizeof(char) * letters) + 1);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(buf);
		return (0);
	}
	count = read(fd, buf, letters);
	if (count < 0)
	{
		free(buf);
		return (0);
	}
	w_count = write(STDOUT_FILENO, buf, count);
	if (w_count < 0)
	{
		free(buf);
		return (0);
	}
	close(fd);
	free(buf);

	return (count);
}
