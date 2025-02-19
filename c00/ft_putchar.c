/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 10:55:33 by abhaifou          #+#    #+#             */
/*   Updated: 2025/02/19 10:55:36 by abhaifou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>



void ft_putchar(char c)
{
    write(1, &c, 1);
}


// int main()
// {
//     ft_putchar('a');
//     ft_putchar('\n');
//     char c = 'c';
//     ft_putchar(c);
//     ft_putchar('\n');
// }