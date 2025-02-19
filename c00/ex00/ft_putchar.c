/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 11:22:49 by abhaifou          #+#    #+#             */
/*   Updated: 2025/02/19 17:57:20 by abhaifou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
// int main()
// {
//     char c = 'c';
//     ft_putchar(c);
//     ft_putchar('\n');
//     ft_putchar('s');
//     ft_putchar('\n');

// }
