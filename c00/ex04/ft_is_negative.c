/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 11:47:20 by abhaifou          #+#    #+#             */
/*   Updated: 2025/02/19 18:08:20 by abhaifou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}
// int main ()
// {
//     ft_is_negative(-26);
//     write(1, "\n", 1);
//       ft_is_negative(0);
//     write(1, "\n", 1);
//       ft_is_negative(1);
//     write(1, "\n", 1);
//       ft_is_negative(900);
//     write(1, "\n", 1);
//       ft_is_negative(-800);
//     write(1, "\n", 1);

// }
