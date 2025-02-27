/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 10:40:16 by abhaifou          #+#    #+#             */
/*   Updated: 2025/02/27 14:55:26 by abhaifou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;
	int	minus_count;

	i = 0;
	result = 0;
	sign = 1;
	minus_count = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			minus_count++;
	}
	if (minus_count % 2 != 0)
		sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
		result = result * 10 + (str[i++] - '0');
	return (result * sign);
}
/*int main()
{
	char *str = "  +++---+214445aefea";
	printf("nbr is: %d\n", ft_atoi(str));
}*/
