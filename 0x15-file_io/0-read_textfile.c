#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - Read text file and print to STDOUT.
 * @filename: Name of the text file being read
 * @letters: Number of letters to be read
 *
 * Return: Number of bytes read and printed, 0 on failure or if filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    char *buf;
    ssize_t fd, t, w;

    if (filename == NULL)
        return (0);

    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);

    buf = malloc(sizeof(char) * letters);
    if (buf == NULL)
    {
        close(fd);
        return (0);
    }

    t = read(fd, buf, letters);
    if (t == -1)
    {
        free(buf);
        close(fd);
        return (0);
    }

    w = write(STDOUT_FILENO, buf, t);
    if (w == -1 || w != t)
    {
        free(buf);
        close(fd);
        return (0);
    }

    free(buf);
    close(fd);
    return (w);
}

