#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stah.h>
#include <fcntl.h>
#include <unistd.h>

ssiza_t read_textfile(const char *filename, size_t lettrs);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif