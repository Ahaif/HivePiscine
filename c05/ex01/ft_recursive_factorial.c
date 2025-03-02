/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 14:32:12 by abhaifou          #+#    #+#             */
/*   Updated: 2025/03/02 16:21:40 by abhaifou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*int main()
{
    printf("Factorial of 5: %d\n", ft_recursive_factorial(5));  // Expected: 120
    printf("Factorial of 0: %d\n", ft_recursive_factorial(0));  // Expected: 1
    printf("Factorial of -3: %d\n", ft_recursive_factorial(-3)); // Expected: 0
    return 0;
}*/
