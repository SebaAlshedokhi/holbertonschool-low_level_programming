#include "main.h"
/**
 * check_arguments - ensures correct number of arguments
 * @argc: argument count
 */
void check_arguments(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * open_source_file - opens file for reading
 * @filename: name of source file
 * Return: file descriptor
 */
int open_source_file(const char *filename)
{
	int fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	return (fd);
}

/**
 * open_dest_file - opens/creates file for writing
 * @filename: name of destination file
 * Return: file descriptor
 */
int open_dest_file(const char *filename)
{
	int fd;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (fd);
}

/**
 * copy_content - copies content from one fd to another
 * @from_fd: source file descriptor
 * @to_fd: destination file descriptor
 * @file_from: source filename (for error messages)
 * @file_to: destination filename (for error messages)
 */
void copy_content(int from_fd, int to_fd, const char *file_from, const char *file_to)
{
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	bytes_read = read(from_fd, buffer, 1024);
	while (bytes_read > 0)
	{
		bytes_written = write(to_fd, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close(from_fd);
			close(to_fd);
			exit(99);
		}
		bytes_read = read(from_fd, buffer, 1024);
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		close(from_fd);
		close(to_fd);
		exit(98);
	}
}

/**
 * close_fd - closes a file descriptor with error checking
 * @fd: file descriptor
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, exits with codes on failure
 */
int main(int argc, char *argv[])
{
	int from_fd, to_fd;
	check_arguments(argc);
	from_fd = open_source_file(argv[1]);
	to_fd = open_dest_file(argv[2]);
	copy_content(from_fd, to_fd, argv[1], argv[2]);
	close_fd(from_fd);
	close_fd(to_fd);
	return (0);
}
