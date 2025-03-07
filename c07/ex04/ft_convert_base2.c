/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 10:26:23 by abhaifou          #+#    #+#             */
/*   Updated: 2025/03/06 11:53:05 by abhaifou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!base || !base[1])
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] == 127)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	get_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

char	*skip_white_space(char *nbr)
{
	while (*nbr == ' ' || (*nbr >= 9 && *nbr >= 13))
		nbr++;
	return (nbr);
}

int	define_sign(char **nbr)
{
	int	sign;

	sign = 1;
	while (**nbr == '-' || **nbr == '+')
	{
		if (**nbr == '-')
			sign *= -1;
		(*nbr)++;
	}
	return (sign);
}

int	ft_atoi_base(char *nbr, char *base_from)
{
	int	base_len;
	int	i;
	int	sign;
	int	num;
	int	index;

	base_len = is_valid_base(base_from);
	i = 0;
	num = 0;
	if (base_len < 2)
		return (0);
	nbr = skip_white_space(nbr);
	sign = define_sign(&nbr);
	while (*nbr)
	{
		index = get_index(*nbr, base_from);
		if (index == -1)
			break ;
		num = num * base_len + index;
		nbr++;
	}
	return (num * sign);
}
