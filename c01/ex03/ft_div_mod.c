/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:44:01 by abhaifou          #+#    #+#             */
/*   Updated: 2025/02/21 10:48:33 by abhaifou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if(b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
// int main()
// {
// 	int a =4;
// 	int b =2;

// 	*int div = &a;
// 	*int mod = &b;
// 	ft_div_mod(a, b, div, mod);
// }