/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 10:57:09 by abhaifou          #+#    #+#             */
/*   Updated: 2025/02/23 09:28:02 by abhaifou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	size = 0;
	while (tab[i])
	{
		if (tab[i + 1] == 0)
			break ;
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
			continue ;
		}
		i++;
	}
}
// int main()
// {
// 	int tab[] = {5,6,8, 1, 4};
// 	ft_sort_int_tab(tab, 5);
// }
