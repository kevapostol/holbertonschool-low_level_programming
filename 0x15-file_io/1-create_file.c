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

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	for (strLen = 0; text_content[strLen]; strLen++)
		;

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	else
		w_stat = write(fd, text_content, strLen);
	if (w_stat < 0)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
