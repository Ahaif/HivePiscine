/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:42:17 by abhaifou          #+#    #+#             */
/*   Updated: 2025/02/27 10:50:34 by abhaifou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	if (str[0] == '\0')
		return (1);
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	ft_str_is_printable(char *str);

// int main()
// {
//     // Test cases
//     printf("Test 1 (\"Hello!\"): %d\n"
//     , ft_str_is_printable("Hello!"));   // Expected: 1
//     printf("Test 2 (\"Hello\\n\"): %d\n"
//     , ft_str_is_printable("Hello\n")); 
//     // Expected: 0 (contains non-printable char)
//     return 0;
// }
