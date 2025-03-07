/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 10:38:04 by abhaifou          #+#    #+#             */
/*   Updated: 2025/03/03 11:22:30 by abhaifou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}
// int main()
// {
//     printf("Is 2 prime? %d\n", ft_is_prime(2));  // Expected: 1
//     printf("Is 3 prime? %d\n", ft_is_prime(3));  // Expected: 1
//     printf("Is 4 prime? %d\n", ft_is_prime(4));  // Expected: 0
//     printf("Is 5 prime? %d\n", ft_is_prime(5));  // Expected: 1
//     printf("Is 11 prime? %d\n", ft_is_prime(11));// Expected: 1
//     printf("Is 25 prime? %d\n", ft_is_prime(25));// Expected: 0
//     printf("Is 97 prime? %d\n", ft_is_prime(97));// Expected: 1
//     printf("Is 100 prime? %d\n", ft_is_prime(100));// Expected: 0
//     return 0;
// }
