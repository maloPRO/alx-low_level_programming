#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

/**
* append_text_to_file - appends text to file
* @filename: filename
* @text_content: text
* Return: 1 on success
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_APPEND | O_WRONLY);

	if (fd < 0)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, strlen(text_content));
		if (bytes_written < 0)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
