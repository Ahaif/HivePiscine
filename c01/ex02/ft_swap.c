/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 09:15:22 by abhaifou          #+#    #+#             */
/*   Updated: 2025/02/23 09:17:40 by abhaifou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

// int main()
// {
// 	int a =3;
// 	int b=55;
// 	printf("Before swap: a = %d, b = %d\n", a, b);
// 	ft_swap(&a, &b);
// 	printf("After swap: a = %d, b = %d\n", a, b);
// }	
