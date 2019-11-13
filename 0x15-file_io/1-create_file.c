#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * create_file - function that creates a file
 * @filename: file name
 * @text_content: content to be added to file
 * Return: success: 1 not success: -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, strLen, w_stat;
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

	if (text_content == NULL)
		w_stat = write(fd, "", strLen);
	else
		w_stat = write(fd, text_content, strLen);
	if (w_stat < 0)
	{
		free(buff);
		return (-1);
	}
	close(fd);
	free(buff);
	return (1);
}
