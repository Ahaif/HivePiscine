
#include "rush02.h"
#include <stdio.h>


t_dict parse_line(char *line)
{
    t_dict entry;
    int i = 0;

    while (line[i] == ' ') // Skip leading spaces
        i++;

    // Extract key (number)
    int start = i;
    while (line[i] >= '0' && line[i] <= '9')
        i++;

    if (start == i) // No number found
    {
        print_error("Dict Error 3\n");
        entry.key = NULL;
        return entry;
    }

    // Allocate and copy key
    entry.key = malloc(i - start + 1);
    if (!entry.key)
        return entry;
    strncpy(entry.key, line + start, i - start);
    entry.key[i - start] = '\0';

    // Skip spaces after number
    while (line[i] == ' ')
        i++;

    // Ensure colon `:`
    if (line[i] != ':')
    {
        print_error("Dict Error 3\n");
        free(entry.key);
        entry.key = NULL;
        return entry;
    }
    i++; // Move past `:`

    // Skip spaces after `:`
    while (line[i] == ' ')
        i++;

    // Ensure there's a value
    if (line[i] == '\0')
    {
        print_error("Dict Error 4\n");
        free(entry.key);
        entry.key = NULL;
        return entry;
    }

    // Copy the value, stop at spaces or end of string
    char *value_start = line + i;
    int value_end = i;
    while (line[value_end] != '\0' && line[value_end] != ' ')
        value_end++;

    // Allocate memory and copy value
    entry.value = malloc(value_end - i + 1);
    if (!entry.value)
    {
        free(entry.key);
        entry.key = NULL;
        return entry;
    }
    strncpy(entry.value, value_start, value_end - i);
    entry.value[value_end - i] = '\0';

    return entry;
}



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

    t_dict *dict = malloc(100 * sizeof(t_dict));
    if (!dict)
        return NULL;

    *dict_size = 0;
    char *line = buffer;
    
    while (*line)
    {
		
        while (*line == '\n')
            line++;

        char *next_line = line;
        while (*next_line && *next_line != '\n')
            next_line++;

        if (*next_line == '\n')
        {
            *next_line = '\0'; 
            next_line++;
        }
		
        if (*line != '\0') 
        {
            dict[*dict_size] = parse_line(line);
            if (dict[*dict_size].key != NULL)
                (*dict_size)++;
        }

        line = next_line;
    }

    return dict;
}



char *required_keys[] = {
    "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10",
    "20", "30", "40", "50", "60", "70", "80", "90",
    "100", "1000", "1000000", NULL
};


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



//end -- start  
// int * : end to start 


// end > start -> decreasing order    -5  2 , 6 -2

// end < start. -> increasing order

