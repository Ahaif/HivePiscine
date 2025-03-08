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
		min++;
		i++;
	}
	return (i);
}

// void test_ultimate_range(int min, int max)
// {
//     int *arr;
//     int size = ft_ultimate_range(&arr, min, max);

//     printf("ft_ultimate_range(%d, %d) → Size: %d\n", min, max, size);
//     if (size == -1)
//         printf("Memory allocation failed.\n");
//     else if (size == 0)
//         printf("Invalid range (NULL returned).\n");
//     else
//     {
//         printf("Values: ");
//         for (int i = 0; i < size; i++)
//             printf("%d ", arr[i]);
//         printf("\n");
//         free(arr); // Free memory to prevent leaks
//     }
//     printf("\n");
// }

// int main()
// {
//     printf("==== Testing ft_ultimate_range ====\n\n");

//     test_ultimate_range(5, 10);   // Expected: [5, 6, 7, 8, 9]
//     test_ultimate_range(0, 5);    // Expected: [0, 1, 2, 3, 4]
//     test_ultimate_range(-3, 3);   // Expected: [-3, -2, -1, 0, 1, 2]
//     test_ultimate_range(10, 5);   // Expected: NULL (invalid range)
//     test_ultimate_range(3, 3);    // Expected: NULL (empty range)
//     test_ultimate_range(-100, -95); // Expected: [-100, -99, -98, -97, -96]

//     return 0;
// }