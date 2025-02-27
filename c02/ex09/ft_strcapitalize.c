/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:46:46 by abhaifou          #+#    #+#             */
/*   Updated: 2025/02/27 10:46:43 by abhaifou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	to_lowercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

char	to_uppercase(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (c - 32);
	return (c);
}

int	is_alphanumeric(char c)
{
	return (((c >= 'a') && (c <= 'z'))
		|| (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	if (!str)
		return (str);
	i = 0;
	new_word = 1;
	while (str[i])
	{
		str[i] = to_lowercase(str[i]);
		if (is_alphanumeric(str[i]))
		{
			if (new_word && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = to_uppercase(str[i]);
			new_word = 0;
		}
		else
			new_word = 1;
		i++;
	}
	return (str);
}
// #include <stdio.h>
// #include <stdlib.h>

// char	*ft_strcapitalize(char *str);

// int main()
// {
//     // Test cases
//     char str1[] = "hello world";   // Expected: "Hello World"
//     char str2[] = "42school is awesome"; // Expected: "42school Is Awesome"
//     char str3[] = "HELLO, my FRIEND!";   // Expected: "Hello, My Friend!"
//     char str4[] = "this is a-test"; // Expected: "This Is A-Test"

//     printf("Test 1: %s\n", ft_strcapitalize(str1));
//     printf("Test 2: %s\n", ft_strcapitalize(str2));
//     printf("Test 3: %s\n", ft_strcapitalize(str3));
//     printf("Test 4: %s\n", ft_strcapitalize(str4));

//     system("leaks a.out"); // Check for memory leaks (useful in macOS)
//     return 0;
// }
