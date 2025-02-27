/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:38:43 by abhaifou          #+#    #+#             */
/*   Updated: 2025/02/27 10:41:18 by abhaifou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	if (str[0] == '\0')
		return (1);
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	ft_str_is_numeric(char *str);

// int main()
// {
//     // Test cases
//     printf("Test 1 (\"12345\"): %d\n",
//      ft_str_is_numeric("12345"));   // Expected: 1
//     printf("Test 2 (\"123abc\"): %d\n",
//     ft_str_is_numeric("123abc")); // Expected: 0

//     system("leaks a.out"); // Check for memory leaks (useful in macOS)
//     return 0;
// }
