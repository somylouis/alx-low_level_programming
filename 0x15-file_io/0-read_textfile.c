#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the maximum number of letters to read and print
 *
 * Return: the actual number of letters read and printed, or 0 on failure
 *
 * Notes: If the file can not be opened or read, return 0. If filename is NULL,
 *        return 0. If write fails or does not write the expected amount of bytes,
 *        return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int jp, n_read;
	char *best;

	if (filename == NULL)
	return (0);

	best = malloc(sizeof(char) * letters);

	if (best == NULL)
	return (0);

	jp = open(filename, O_RDONLY);

	if (jp == -1)
	{
	free(best);
	return (0);
	}

	n_read = read(jp, best, letters);

	if (n_read == -1)
	{
	free(best);
	close(jp);
	return (0);
	}

	if (write(STDOUT_FILENO, best, n_read) != n_read)
	{
	free(best);
	close(jp);
	return (0);
	}

	free(best);
	close(jp);
	return (n_read);
}
