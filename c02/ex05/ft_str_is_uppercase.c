/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:41:06 by abhaifou          #+#    #+#             */
/*   Updated: 2025/02/27 10:42:31 by abhaifou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	if (str[0] == '\0')
		return (1);
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
// #include <stdio.h>
// #include <stdlib.h>

// int	ft_str_is_uppercase(char *str);

// int main()
// {
//     // Test cases
//     printf("Test 1 (\"HELLO\"): %d\n"
//     , ft_str_is_uppercase("HELLO"));   // Expected: 1
//     printf("Test 2 (\"Hello\"): %d\n"
//     , ft_str_is_uppercase("Hello"));   // Expected: 0

//     system("leaks a.out"); // Check for memory leaks (useful in macOS)
//     return 0;
// }
