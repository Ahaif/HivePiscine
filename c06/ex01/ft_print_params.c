/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 09:39:58 by abhaifou          #+#    #+#             */
/*   Updated: 2025/03/04 10:27:51 by abhaifou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	put_str(char *str)
{
	int	i;

	if (str)
	{
		i = 0;
		while (str[i])
			write(1, &str[i++], 1);
	}
}	

int	main(int ac, char **av)
{
	int	i;

	if (ac > 1)
	{
		i = 1;
		while (i < ac)
		{
			put_str(av[i]);
			write(1, "\n", 1);
			i++;
		}
	}
}		
