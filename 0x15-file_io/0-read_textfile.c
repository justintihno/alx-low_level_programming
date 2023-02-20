#include <main.h>

/**
* read_textfile - reads a text file and prints it to the POSIX standard output
* @filename: the name of the file to read
* @letters: the number of letters to read and print
* Return: the actual number of letters read and printed, or 0 on failure
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
    if (filename == NULL) {
        return 0;
    }

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        return 0;
    }

    char *buffer = (char *)malloc(sizeof(char) * (letters + 1));
    if (buffer == NULL) {
        fclose(fp);
        return 0;
    }

    size_t bytes_read = fread(buffer, sizeof(char), letters, fp);
    if (bytes_read == 0) {
        fclose(fp);
        free(buffer);
        return 0;
    }

    buffer[bytes_read] = '\0';

    ssize_t bytes_written = printf("%s", buffer);
    if (bytes_written < 0 || (size_t)bytes_written != bytes_read) {
        fclose(fp);
        free(buffer);
        return 0;
    }

    fclose(fp);
    free(buffer);
    return bytes_read;
}
