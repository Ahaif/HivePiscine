/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 14:19:19 by abhaifou          #+#    #+#             */
/*   Updated: 2025/02/26 09:51:13 by abhaifou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
// #include <stdio.h>
// #include <stdlib.h>

// char	*ft_strncpy(char *dest, char *src, unsigned int n);

// int main()
// {
//     char dest1[10];
//     char dest2[10];

//     ft_strncpy(dest1, "Hello", 3);
//     ft_strncpy(dest2, "World", 7);

//     printf("Test 1: %s\n", dest1);
//     printf("Test 2: %s\n", dest2);

//     // system("leaks a.out"); // Check for memory leaks (useful in macOS)
//     return 0;
// }
