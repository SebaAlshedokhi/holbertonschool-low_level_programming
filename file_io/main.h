#ifndef MAIN_H
#define MAIN_H
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void check_arguments(int argc);
int open_source_file(const char *filename);
int open_dest_file(const char *filename);
void copy_content(int from_fd, int to_fd, const char *file_from, const char *file_to);
void close_fd(int fd);
#endif
