/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 09:29:43 by abhaifou          #+#    #+#             */
/*   Updated: 2025/02/27 10:49:23 by abhaifou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_hex(unsigned char c)
{
	char	*hex_digits;

	hex_digits = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hex_digits[c / 16]);
	ft_putchar(hex_digits[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return ;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			ft_putchar(str[i]);
		else
			ft_put_hex((unsigned char)str[i]);
		i++;
	}	
}
// #include <stdio.h>
// #include <stdlib.h>

// void	ft_putstr_non_printable(char *str);

// int main()
// {
//     printf("Test 1 (Printable): ");
//     ft_putstr_non_printable("Hello, World!"); 
//     // Expected: Hello, World!
//     printf("\n");

//     printf("Test 2 (Non-Printable): ");
//     ft_putstr_non_printable("Hello\tWorld\n"); 
//     // Expected: Hello\09World\0a
//     printf("\n");

//     printf("Test 3 (Mixed): ");
//     ft_putstr_non_printable("Coucou\ntu vas bien ?");
//     // Expected: Coucou\0atu vas bien ?
//     printf("\n");

//     // system("leaks a.out"); // Check for memory leaks (useful in macOS)
//     return 0;
// }
