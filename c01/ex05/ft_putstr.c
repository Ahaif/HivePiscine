/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 10:36:30 by abhaifou          #+#    #+#             */
/*   Updated: 2025/02/21 10:39:12 by abhaifou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// #include <unistd.h>
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
// int main()
// {
// 	ft_putstr("abdel moughite \n");
// }
