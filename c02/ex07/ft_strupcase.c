/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:43:41 by abhaifou          #+#    #+#             */
/*   Updated: 2025/02/27 10:44:29 by abhaifou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
// #include <stdio.h>
// #include <stdlib.h>
// char	*ft_strupcase(char *str);
// int main()
// {
//     // Test cases
//     char str1[] = "hello";   // Should be converted to "HELLO"
//     char str2[] = "Hello123"; // Should be converted to "HELLO123"
//     printf("Test 1 (\"hello\"): %s\n"
//     , ft_strupcase(str1));   // Expected: "HELLO"
//     printf("Test 2 (\"Hello123\"): %s\n",
//     ft_strupcase(str2)); // Expected: "HELLO123"
//     system("leaks a.out"); // Check for memory leaks (useful in macOS)
//     return 0;
// }
