#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of the file
 * @text_content: NULL-terminated string to append
 * Return: 1 on success, -1 on failure
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int jp, result, lent;

	if (filename == NULL)
	return (-1);

	jp = open(filename, O_WRONLY | O_APPEND);
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

