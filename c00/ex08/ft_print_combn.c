/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 16:27:13 by abhaifou          #+#    #+#             */
/*   Updated: 2025/02/19 17:52:10 by abhaifou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_number(int n)
{
    if(n > 10)
        ft_print_number(n/10);
    ft_putchar(n %10 + '0');
}


void    ft_print_combn(int n)
{
    int i;
    i = 0;

    while(i < n)
    {
        
    }
}