#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

/**
* create_file - creates file
* @filename: file name
* @text_content: string
* Return: 1 on  success
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;
	mode_t permissions;

	if (filename == NULL)
	{
		return (-1);
	}

	permissions = S_IRUSR | S_IWUSR;

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, permissions);
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
