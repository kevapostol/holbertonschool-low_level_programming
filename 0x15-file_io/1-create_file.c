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

int create_file(const char *filename, char *text_content)
{
	int fd, strLen;
	char *buff;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY, 00600);
	if (fd < 0)
		return (-1);

	for (strLen = 0; text_content[strLen]; strLen++)
		;

	buff = malloc(sizeof(char) * strLen + 1);
	if (buff == NULL)
		return (-1);

	if (write(fd, text_content, strLen) < 0)
	{
		free(buff);
		return (-1);
	}

	return (1);
}
