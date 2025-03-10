/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:31:10 by abhaifou          #+#    #+#             */
/*   Updated: 2025/03/10 14:46:31 by abhaifou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

void display_error(char *msg) {
    write(2, msg, sizeof(msg) - 1);
}

int main(int argc, char *argv[])
{
	int		fd;
    int		bytes_read;
	char	buffer[BUFFER_SIZE];

    if (argc == 1)
	{
        display_error("File name missing\n");
        return (1);
    }
    if (argc > 2)
	{
        display_error("Too many arguments\n");
        return (1);
    }
    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
	{
        display_error("Cannot read file\n");
        return (1);
    }
    while ((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0)
		write(1, buffer, bytes_read);
    close(fd);
    return 0;
}

