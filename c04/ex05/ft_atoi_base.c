/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 19:08:50 by abhaifou          #+#    #+#             */
/*   Updated: 2025/02/27 19:08:53 by abhaifou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Check if base is valid
int is_valid_base(char *base)
{
    int i = 0, j;

    while (base[i])
    {
        // Base must not contain whitespace, '+' or '-'
        if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] == 127)
            return (0);
        j = i + 1;
        while (base[j])
        {
            if (base[i] == base[j])
                return (0); // Duplicate character found
            j++;
        }
        i++;
    }
    return (i > 1); // Base must contain at least 2 characters
}

// Skip whitespace characters
int skip_whitespace(char *str, int *i)
{
    while (str[*i] == ' ' || (str[*i] >= 9 && str[*i] <= 13))
        (*i)++;
    return (*i);
}

// Get index of a character in the base
int get_index(char c, char *base)
{
    int i = 0;
    while (base[i])
    {
        if (base[i] == c)
            return (i);
        i++;
    }
    return (-1);
}

// Convert string to int with given base
int ft_atoi_base(char *str, char *base)
{
    int i = 0, sign = 1, result = 0, base_len = 0, index;

    if (!is_valid_base(base)) // Check base validity
        return (0);

    while (base[base_len]) // Get base length
        base_len++;

    skip_whitespace(str, &i); // Skip initial spaces

    while (str[i] == '+' || str[i] == '-') // Handle signs
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }

    while ((index = get_index(str[i], base)) != -1) // Convert valid characters
    {
        result = result * base_len + index;
        i++;
    }

    return (result * sign);
}

// Test function
// int main()
// {
//     write(1, "Test 1: ", 8);
//     int res1 = ft_atoi_base("   ---+--+1234ab567", "0123456789"); // Should return -1234
//     if (res1 < 0)
//         write(1, "-", 1);
//     char c1 = '0' + (res1 < 0 ? -res1 : res1);
//     write(1, &c1, 1);
//     write(1, "\n", 1);

//     write(1, "Test 2: ", 8);
//     int res2 = ft_atoi_base("2A", "0123456789ABCDEF"); // Should return 42 (hex)
//     if (res2 < 0)
//         write(1, "-", 1);
//     char c2 = '0' + res2;
//     write(1, &c2, 1);
//     write(1, "\n", 1);

//     write(1, "Test 3: ", 8);
//     int res3 = ft_atoi_base("101010", "01"); // Should return 42 (binary)
//     if (res3 < 0)
//         write(1, "-", 1);
//     char c3 = '0' + res3;
//     write(1, &c3, 1);
//     write(1, "\n", 1);

//     return 0;
// }


