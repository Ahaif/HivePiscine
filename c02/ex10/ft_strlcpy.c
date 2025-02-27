/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 09:28:09 by abhaifou          #+#    #+#             */
/*   Updated: 2025/02/27 10:47:45 by abhaifou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	if (size == 0)
		return (i);
	while (j < size -1 && src[j])
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (i);
}
// #include <stdio.h>
// #include <stdlib.h>

// unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

// int main()
// {
//     char dest1[10];
//     char dest2[5];
//     char dest3[1];

//     // Test cases
//     unsigned int len1 = ft_strlcpy(dest1
//     , "Hello", 10);  // Expected: "Hello", return 5
//     unsigned int len2 = ft_strlcpy(dest2
//	, "Hello", 5);   // Expected: "Hell", return 5 (truncated)
//     unsigned int len3 = ft_strlcpy(dest3, "Hello", 1);

//     printf("Test 1: \"%s\" (len: %u)\n", dest1, len1);
//     printf("Test 2: \"%s\" (len: %u)\n", dest2, len2);
//     printf("Test 3: \"%s\" (len: %u)\n", dest3, len3);

//     system("leaks a.out"); // Check for memory leaks (useful in macOS)
//     return 0;
// }
