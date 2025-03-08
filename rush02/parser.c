
#include "rush02.h"
#include <unistd.h>
#include <stdlib.h>

// Custom strlen
int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

// Custom strcpy (duplicate a string)
char *ft_strdup(char *src)
{
    int len = ft_strlen(src);
    char *dest = malloc(len + 1);
    int i = 0;
    if (!dest)
        return NULL;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

// Custom strcmp (compare two strings)
int ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while (s1[i] && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}

// Custom function to print a string
void ft_putstr(char *str)
{
    write(1, str, ft_strlen(str));
}

// Custom function to print an error and return
void print_error(char *msg)
{
    ft_putstr(msg);
}

// Custom function to split a line "number : text"
t_dict parse_line(char *line)
{
    t_dict entry;
    int i = 0;

    while (line[i] && (line[i] >= '0' && line[i] <= '9'))
        i++;

    if (i == 0 || line[i] != ' ') // Invalid number format
    {
        print_error("Dict Error\n");
        entry.key = NULL;
        return entry;
    }

    entry.key = ft_strdup(line); // Store number
    entry.key[i] = '\0';

    while (line[i] && (line[i] == ' ' || line[i] == ':'))
        i++;

    if (line[i] == '\0') // No value after ':'
    {
        print_error("Dict Error\n");
        entry.key = NULL;
        return entry;
    }

    entry.value = ft_strdup(line + i); // Store word representation
    return entry;
}

// Read dictionary file using open/read
t_dict *read_dictionary(char *filename, int *dict_size)
{
    int fd = open(filename, O_RDONLY);
    if (fd < 0)
    {
        print_error("Dict Error\n");
        return NULL;
    }

    char buffer[4096];
    int bytes_read = read(fd, buffer, 4095);
    close(fd);
    
    if (bytes_read <= 0)
    {
        print_error("Dict Error\n");
        return NULL;
    }

    buffer[bytes_read] = '\0';

    // Allocate memory for dictionary (assume max 100 entries)
    t_dict *dict = malloc(100 * sizeof(t_dict));
    if (!dict)
        return NULL;

    *dict_size = 0;
    char *line = buffer;
    while (*line)
    {
        char *next_line = line;
        while (*next_line && *next_line != '\n') // Find end of line
            next_line++;
        *next_line = '\0';

        if (*line != '\0') // Ignore empty lines
        {
            dict[*dict_size] = parse_line(line);
            if (dict[*dict_size].key != NULL)
                (*dict_size)++;
        }
        line = next_line + 1;
    }

    return dict;
}


// List of required keys
char *required_keys[] = {
    "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10",
    "20", "30", "40", "50", "60", "70", "80", "90",
    "100", "1000", "1000000", NULL
};

// Check if required numbers exist in dictionary
int check_required_entries(t_dict *dict, int dict_size)
{
    for (int i = 0; required_keys[i] != NULL; i++)
    {
        int found = 0;
        for (int j = 0; j < dict_size; j++)
        {
            if (ft_strcmp(dict[j].key, required_keys[i]) == 0)
            {
                found = 1;
                break;
            }
        }
        if (!found)
        {
            print_error("Dict Error\n");
            return 0;
        }
    }
    return 1;
}
