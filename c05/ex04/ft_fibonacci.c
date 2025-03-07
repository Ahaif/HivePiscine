/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 09:45:47 by abhaifou          #+#    #+#             */
/*   Updated: 2025/03/03 09:51:13 by abhaifou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
int main()
{
    printf("Fibonacci(0) = %d\n", ft_fibonacci(0));  // Expected: 0
    printf("Fibonacci(1) = %d\n", ft_fibonacci(1));  // Expected: 1
    printf("Fibonacci(2) = %d\n", ft_fibonacci(2));  // Expected: 1
    printf("Fibonacci(3) = %d\n", ft_fibonacci(3));  // Expected: 2
    printf("Fibonacci(5) = %d\n", ft_fibonacci(5));  // Expected: 5
    printf("Fibonacci(8) = %d\n", ft_fibonacci(8));  // Expected: 21
    printf("Fibonacci(-3) = %d\n", ft_fibonacci(-3)); // Expected: -1
    return 0;
}*/
