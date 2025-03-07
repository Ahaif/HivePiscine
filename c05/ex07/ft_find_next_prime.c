/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 11:23:44 by abhaifou          #+#    #+#             */
/*   Updated: 2025/03/03 14:49:47 by abhaifou         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

// int main()
// {
//     printf("Next prime >= 4: %d\n", ft_find_next_prime(4));  // Expected: 5
//     printf("Next prime >= 10: %d\n", ft_find_next_prime(10)); // Expected: 11
//     printf("Next prime >= 15: %d\n", ft_find_next_prime(15)); // Expected: 17
//     printf("Next prime >= 23: %d\n", ft_find_next_prime(23)); // Expected: 23
//     printf("Next prime >= 30: %d\n", ft_find_next_prime(30)); // Expected: 31
//     printf("Next prime >= -5: %d\n", ft_find_next_prime(-5)); // Expected: 2
//     return 0;
// }
