/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 09:07:55 by abhaifou          #+#    #+#             */
/*   Updated: 2025/03/06 12:01:30 by abhaifou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*res;
	int		i;

	if (!src)
		return (NULL);
	i = 0;
	while (src[i])
		i++;
	res = (char *)malloc((1 + i) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (src[i])
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*#include <stdio.h>

int main()
{
    char str[] = "Hello, world!";
    char *copy = ft_strdup(str);

    if (copy)
    {
        printf("Original: %s\n", str);
        printf("Copy: %s\n", copy);
        free(copy); // Free allocated memory
    }
    else
        printf("Memory allocation failed.\n");

    return 0;
}*/
