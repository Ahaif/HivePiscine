/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 10:21:19 by abhaifou          #+#    #+#             */
/*   Updated: 2025/02/21 10:33:48 by abhaifou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// #include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int rem;

	if(*b != 0)
	{
		div = *a / *b;
		rem = *a % *b;
		*a = div;
		*b = rem;
	}
}
// int main()
// {
// 	int a =10;
// 	int b =3;

//     printf("Before: a = %d, b = %d\n", a, b);

//     ft_ultimate_div_mod(&a, &b);

//     printf("After: a = %d (quotient), b = %d (remainder)\n", a, b);

//     return 0;
// }