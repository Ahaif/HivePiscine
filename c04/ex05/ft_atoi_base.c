/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 19:08:50 by abhaifou          #+#    #+#             */
/*   Updated: 2025/03/02 12:30:25 by abhaifou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
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
	return (i > 1);
}

int	skip_whitespace(char *str, int *i)
{
	while (str[*i] == ' ' || (str[*i] >= 9 && str[*i] <= 13))
		(*i)++;
	return (*i);
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

int	get_base_len(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	set_sign(char *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	return (sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;
	int	base_len;
	int	index;

	i = 0;
	sign = 1;
	result = 0;
	if (!is_valid_base(base))
		return (0);
	base_len = get_base_len(base);
	skip_whitespace(str, &i);
	sign = set_sign(str);
	index = get_index(str[i], base);
	while (index != -1)
	{
		result = result * base_len + index;
		i++;
		index = get_index(str[i], base);
	}
	return (result * sign);
}
// Test function
// int main()
// {
//     write(1, "Test 1: ", 8);
//     int res1 = ft_atoi_base("   ---+--+1234ab567", "0123456789");
//     // Should return -1234
//     if (res1 < 0)
//         write(1, "-", 1);
//     char c1 = '0' + (res1 < 0 ? -res1 : res1);
//     write(1, &c1, 1);
//     write(1, "\n", 1);

//     write(1, "Test 2: ", 8);
//     int res2 = ft_atoi_base("2A", "0123456789ABCDEF");
//     // Should return 42 (hex)
//     if (res2 < 0)
//         write(1, "-", 1);
//     char c2 = '0' + res2;
//     write(1, &c2, 1);
//     write(1, "\n", 1);

//     write(1, "Test 3: ", 8);
//     int res3 = ft_atoi_base("101010", "01");
//     // Should return 42 (binary)
//     if (res3 < 0)
//         write(1, "-", 1);
//     char c3 = '0' + res3;
//     write(1, &c3, 1);
//     write(1, "\n", 1);

//     return 0;
// }
