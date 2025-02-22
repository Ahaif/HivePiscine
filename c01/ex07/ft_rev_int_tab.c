/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 10:41:43 by abhaifou          #+#    #+#             */
/*   Updated: 2025/02/21 10:55:55 by abhaifou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int tmp;
	int i;

	i = 0;
	while(i < (size/2))
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp;
		i++;
	}
}


