/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 16:37:39 by abhaifou          #+#    #+#             */
/*   Updated: 2025/03/02 16:43:45 by abhaifou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1)); 
}


int main()
{
    printf("2^3 = %d\n", ft_recursive_power(2, 3));  // Expected: 8
    printf("5^0 = %d\n", ft_recursive_power(5, 0));  // Expected: 1
    printf("0^0 = %d\n", ft_recursive_power(0, 0));  // Expected: 1
    printf("3^-2 = %d\n", ft_recursive_power(3, -2)); // Expected: 0
    printf("4^2 = %d\n", ft_recursive_power(4, 2));  // Expected: 16
    return 0;
}

