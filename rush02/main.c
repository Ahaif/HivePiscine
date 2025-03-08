
#include "rush02.h"

int is_valid_number(char *str)
{
    int i = 0;
    if (!str[0])
        return 0; // Empty string
    while (str[i])
    {
        if (str[i] < '0' || str[i] > '9') // Only allow digits
            return 0;
        i++;
    }
    return 1;
}



int	main(int ac, char **av)
{
    char *dict_file;
    char *number;
    int dict_size;

    if (ac < 2 || ac > 3)
    {
        print_error("Error\n");
        return 1;
    }

    if (ac == 2)
    {
        dict_file = "numbers.dict";
        number = av[1];
    }
    else
    {
        dict_file = av[1];
        number = av[2];
    }

    if (!is_valid_number(number))
    {
        print_error("Error\n");
        return 1;
    }

    t_dict *dict = read_dictionary(dict_file, &dict_size);
    if (!dict)
        return 1;

    if (!check_required_entries(dict, dict_size))
        return 1;

    printf("Now we can process the data in dct\n");

    // free(dict);
    return 0;
}
