#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * append_text_to_file - function that creates a file
 * @filename: file name
 * @text_content: content to be added to file
 * Return: success: 1 not success: -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, strLen;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 0)
		return (-1);

	for (strLen = 0; text_content[strLen]; strLen++)
		;

	write(fd, text_content, strLen);
	close(fd);
	return (1);
}
