/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 14:08:39 by abhaifou          #+#    #+#             */
/*   Updated: 2025/03/02 12:08:29 by abhaifou         ###   ########.fr       */
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
		if (base[i] == '+' || base[i] == '-')
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

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = 0;
	if (!is_valid_base(base))
		return ;
	while (base[base_len])
		base_len++;
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr_base(-(nbr / base_len), base);
		ft_putchar(base[-(nbr % base_len)]);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= base_len)
		ft_putnbr_base(nbr / base_len, base);
	ft_putchar(base[nbr % base_len]);
}
// Test function
// int main()
// {
//     ft_putnbr_base(-2147483648, "0123456789");
//     write(1, "\n", 1);
//     ft_putnbr_base(-42, "0123456789ABCDEF");
//     write(1, "\n", 1);
//     ft_putnbr_base(255, "01");
//     write(1, "\n", 1);
//     ft_putnbr_base(42, "poneyvif");
//     write(1, "\n", 1);
//     return 0;
// }
