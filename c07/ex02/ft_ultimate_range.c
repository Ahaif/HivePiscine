/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 09:42:14 by abhaifou          #+#    #+#             */
/*   Updated: 2025/03/05 09:58:06 by abhaifou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc((max - min) * sizeof(int));
	if (!*range)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (max - min);
}

/*#include <stdio.h>

int main()
{
    int *arr;
    int size = ft_ultimate_range(&arr, 5, 10);

    if (size == -1)
        printf("Memory allocation failed.\n");
    else if (size == 0)
        printf("Invalid range.\n");
    else
    {
        printf("Size: %d\nValues: ", size);
        for (int i = 0; i < size; i++)
            printf("%d ", arr[i]);
        printf("\n");
        free(arr); // Free memory to prevent leaks
    }
    return 0;
}*/
