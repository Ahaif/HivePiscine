/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:16:15 by abhaifou          #+#    #+#             */
/*   Updated: 2025/03/10 15:16:26 by abhaifou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <libgen.h>

#define BUFFER_SIZE 30720 // A buffer size of ~30KB

// Function to display error message with file name
void display_error(char *file_name, char *msg) {
    char *base_name = basename(file_name);
    write(2, "ft_cat: ", 8);
    write(2, base_name, strlen(base_name));
    write(2, ": ", 2);
    write(2, msg, strlen(msg));
    write(2, "\n", 1);
}

int main(int argc, char *argv[]) {
    int fd;
    int bytes_read;
    char buffer[BUFFER_SIZE];

    // If no arguments are provided, read from stdin
    if (argc == 1) {
        while ((bytes_read = read(0, buffer, BUFFER_SIZE)) > 0) {
            write(1, buffer, bytes_read);
        }
        return 0;
    }

    // Process each file provided as argument
    for (int i = 1; i < argc; i++) {
        fd = open(argv[i], O_RDONLY);
        if (fd == -1) {
            // If the file cannot be opened, display an error
            display_error(argv[i], strerror(errno));
            continue;
        }

        // Read and display the content of the file
        while ((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0) {
            write(1, buffer, bytes_read);
        }

        // If an error occurs during reading, display the error
        if (bytes_read == -1) {
            display_error(argv[i], strerror(errno));
        }

        // Close the file
        close(fd);
    }
    return 0;
}

