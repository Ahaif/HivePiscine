/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 13:20:32 by abhaifou          #+#    #+#             */
/*   Updated: 2025/03/02 14:31:15 by abhaifou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	if (nb < 0)
		return (0);
	result = 1;
	i = 1;
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}
/*
int main()
{
    printf("Factorial of 5: %d\n", ft_iterative_factorial(5));  // Expected: 120
    printf("Factorial of 0: %d\n", ft_iterative_factorial(0));  // Expected: 1
    printf("Factorial of -3: %d\n", ft_iterative_factorial(-3)); // Expected: 0
    return 0;
}
*/
