#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * create_file - creates a file and writes a string to it
 * @filename: name of the file to create
 * @text_content: NULL-terminated string to write to the file
 * Return: 1 on success, -1 on failure
 **/
int create_file(const char *filename, char *text_content)
{
	int jp, result, lent;

	if (filename == NULL)
	return (-1);

	jp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (jp == -1)
	return (-1);

	if (text_content != NULL)
	{
	lent = 0;
	while (text_content[lent] != '\0')
		lent++;
	result = write(jp, text_content, lent);
	if (result == -1)
	{
		close(jp);
	return (-1);
	}
	}

	close(jp);
	return (1);
}

