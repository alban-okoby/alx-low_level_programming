#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters) {
    ssize_t bytes_r = 0;
    char buffer[letters];

    // Open the file
    int fd = open(filename, O_RDONLY);
    if (fd == -1) {
        perror("Failed to open file");
        return -1;
    }

    // Read the file and print its contents
    while ((bytes_r = read(fd, buffer, sizeof(buffer))) > 0) {
        if (write(STDOUT_FILENO, buffer, bytes_r) == -1) {
            perror("Failed to write to standard output");
            bytes_r = -1;
            break;
        }
    }

    // Check for errors or end-of-file
    if (bytes_r == -1) {
        perror("Failed to read file");
    }

    // Close the file and return the number of bytes read
    if (close(fd) == -1) {
        perror("Failed to close file");
        bytes_r = -1;
    }

    return bytes_r;
}

