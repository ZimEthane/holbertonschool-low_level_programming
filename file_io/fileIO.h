#ifndef fileIO_H
#define fileIO_H

/*
 * File: fileIO.h
 * Desc: Header file containing prototypes for file I/O functions.
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);


#endif /* fileIO_H */
