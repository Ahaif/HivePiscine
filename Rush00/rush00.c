/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 15:49:34 by abhaifou          #+#    #+#             */
/*   Updated: 2025/02/22 19:43:09 by abhaifou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}






void	print_line(int w, char left, char middle, char right)
{
	int i = 0;
	if(w > 0)
		ft_putchar(left);
	i = 1;
	while(i < w-1)
	{
		ft_putchar(middle);
		i++;
	}
	if(w > 1)
		ft_putchar(right);

	ft_putchar('\n');

}



void	rush(int w, int h)
{
	int i = 0;
	//   || or , && and

	if(w <=0 || h <=0)
		return;

	if(h > 0)
		print_line(w, '/', '*', '\\');

	i = 1;

	while(i < h-1)
	{
		print_line(w, '*', ' ', '*');
		i++;
	}
	if (h >1)
		print_line(w, '\\', '*', '/');
}


int main()
{
	rush(5,3);
	return 0;
}


