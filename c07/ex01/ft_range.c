/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 09:19:33 by abhaifou          #+#    #+#             */
/*   Updated: 2025/03/06 11:59:49 by abhaifou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*res;
	int	i;

	if (min >= max)
		return (NULL);
	res = (int *)malloc((max - min) * sizeof(int));
	if (!res)
		return (NULL);
	i = 0;
	while (min < max)
	{
		res[i] = min;
		i++;
		min++;
	}
	return (res);
}
/*int main()
{
    int *arr = ft_range(1, 10);
    if (arr)
        free(arr); // Prevent memory leak
    return 0;
}*/
