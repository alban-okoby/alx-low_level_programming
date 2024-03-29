#ifndef _FILE_H
#define _FILE_H

/*
 *imports all sytem librairies
 */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>

/* All files functions */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* _FILE_H */

