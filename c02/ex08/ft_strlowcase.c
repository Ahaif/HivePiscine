/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:44:45 by abhaifou          #+#    #+#             */
/*   Updated: 2025/02/27 10:45:20 by abhaifou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (str);
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
// #include <stdio.h>
// #include <stdlib.h>

// char	*ft_strlowcase(char *str);

// int main()
// {
//     // Test cases
//     char str1[] = "HELLO";   // Should be converted to "hello"
//     char str2[] = "Hello123"; // Should be converted to "hello123"

//     printf("Test 1 (\"HELLO\"): %s\n" 
//     , ft_strlowcase(str1));   // Expected: "hello"
//     printf("Test 2 (\"Hello123\"): %s\n"
//     , ft_strlowcase(str2)); // Expected: "hello123"

//     system("leaks a.out"); // Check for memory leaks (useful in macOS)
//     return 0;
// }
