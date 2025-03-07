/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 09:49:28 by abhaifou          #+#    #+#             */
/*   Updated: 2025/03/04 10:32:46 by abhaifou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_put_str(char *str)
{
	int	i;

	if (str)
	{
		i = 0;
		while (str[i])
			write(1, &str[i++], 1);
		write(1, "\n", 1);
	}
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		while (ac >= 1)
			ft_put_str(av[ac--]);
	}
}
