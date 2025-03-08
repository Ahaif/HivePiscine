#ifndef RUSH02_H
#define RUSH02_H

#include <fcntl.h>  // For open()
#include <unistd.h> // For read(), write(), close()
#include <stdlib.h> // For malloc(), free()
#include <stdio.h>  // For perror()
#include <string.h> // For string manipulation functions

#define BUFFER_SIZE 4096

typedef struct s_dict
{
    char *key;
    char *value;
} t_dict;

// Function prototypes
t_dict *read_dictionary(char *filename, int *dict_size);
int check_required_entries(t_dict *dict, int dict_size);
int is_valid_number(char *str);
void print_error(char *msg);

#endif
