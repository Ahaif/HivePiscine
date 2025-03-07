/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 10:15:08 by abhaifou          #+#    #+#             */
/*   Updated: 2025/03/03 14:48:17 by abhaifou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 0;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		if (i > 46340)
			return (0);
		i++;
	}
	return (0);
}
// int main()
// {
//     printf("Square root of 4: %d\n", ft_sqrt(4));   // Expected: 2
//     printf("Square root of 9: %d\n", ft_sqrt(9));   // Expected: 3
//     printf("Square root of 10: %d\n", ft_sqrt(10)); // Expected: 0
//     printf("Square root of 16: %d\n", ft_sqrt(16)); // Expected: 4
//     printf("Square root of 25: %d\n", ft_sqrt(25)); // Expected: 5
//     printf("Square root of 26: %d\n", ft_sqrt(26)); // Expected: 0
//     printf("Square root of 0: %d\n", ft_sqrt(0));   // Expected: 0
//     printf("Square root of -4: %d\n", ft_sqrt(-4)); // Expected: 0
//     return 0;
// }
