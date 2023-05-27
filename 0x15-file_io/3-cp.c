#include "main.h"
/**
 * check_argc - checks if the number of command line arguments is correct
 * @argc: the number of command line arguments
 */
void check_argc(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * open_file - opens a file
 * @filename: the name of the file to open
 * @flags: the flags to use when opening the file
 * @mode: the mode to use when opening the file
 * @error_code: the error code to use if the operation fails
 *
 * Return: the file descriptor of the opened file
 */
int open_file(char *filename, int flags, mode_t mode, int error_code)
{
	int fd;

	fd = open(filename, flags, mode);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't %s %s",
				(error_code == 98) ? "read from file" : "write to", filename);
		exit(error_code);
	}

	return (fd);
}

/**
 * copy_file - copies the contents of one file to another
 * @fd_from: the file descriptor of the source file
 * @fd_to: the file descriptor of the destination file
 */
void copy_file(int fd_from, int fd_to)
{
	ssize_t n_read, n_written;
	char buffer[BUFFER_SIZE];

	while ((n_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		n_written = write(fd_to, buffer, n_read);
		if (n_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file\n");
			exit(99);
		}
	}

	if (n_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file\n");
		exit(98);
	}
}

/**
 * close_files - closes two files
 * @fd_from: the file descriptor of the first file
 * @fd_to: the file descriptor of the second file
 */
void close_files(int fd_from, int fd_to)
{
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
}

/**
 * main - entry point for the cp program
 * @argc: the number of command line arguments
 * @argv: an array of command line arguments
 * Return: 0 on success or an error code on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	check_argc(argc);

	fd_from = open_file(argv[1], O_RDONLY, 0, 98);
	chmod(argv[2], S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	fd_to = open_file(argv[2], O_CREAT | O_WRONLY | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH, 99);

	copy_file(fd_from, fd_to);

	close_files(fd_from, fd_to);

	return (0);
}
