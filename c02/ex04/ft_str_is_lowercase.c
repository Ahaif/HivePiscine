/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:40:07 by abhaifou          #+#    #+#             */
/*   Updated: 2025/02/27 10:41:50 by abhaifou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	if (str[0] == '\0')
		return (1);
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	ft_str_is_lowercase(char *str);

// int main()
// {
//     // Test cases
//     printf("Test 1 (\"hello\"): %d\n",
//     ft_str_is_lowercase("hello"));   // Expected: 1
//     printf("Test 2 (\"Hello\"): %d\n",
//     ft_str_is_lowercase("Hello"));   // Expected: 0

//     system("leaks a.out"); // Check for memory leaks (useful in macOS)
//     return 0;
// }
