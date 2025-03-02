/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 16:22:46 by abhaifou          #+#    #+#             */
/*   Updated: 2025/03/02 16:36:36 by abhaifou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}

/*int main()
{
    printf("2^3 = %d\n", ft_iterative_power(2, 3));  // Expected: 8
    printf("5^0 = %d\n", ft_iterative_power(5, 0));  // Expected: 1
    printf("0^0 = %d\n", ft_iterative_power(0, 0));  // Expected: 1
    printf("3^-2 = %d\n", ft_iterative_power(3, -2)); // Expected: 0
    printf("4^2 = %d\n", ft_iterative_power(4, 2));  // Expected: 16
    return 0;
}*/	
