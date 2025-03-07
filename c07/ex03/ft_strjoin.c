/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 09:59:08 by abhaifou          #+#    #+#             */
/*   Updated: 2025/03/06 12:02:10 by abhaifou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*fill_res(char *res, char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	k;
	int	pos;

	i = 0;
	pos = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			res[pos++] = strs[i][j++];
		k = 0;
		if (i < size - 1)
		{
			while (sep[k])
				res[pos++] = sep[k++];
		}
		i++;
	}
	res[pos] = '\0';
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		sep_len;
	int		total_size;
	char	*res;

	total_size = 0;
	i = 0;
	if (size == 0)
	{
		res = (char *)malloc(1 * sizeof(char));
		res[0] = '\0';
		return (res);
	}
	sep_len = ft_strlen(sep);
	while (i < size)
		total_size += ft_strlen(strs[i++]);
	total_size += sep_len * (size - 1);
	res = (char *)malloc((total_size + 1) * sizeof(char));
	if (!res)
		return (NULL);
	return (fill_res(res, strs, sep, size));
}
/*#include <stdio.h>
int main()
{
    char *strs[] = {"Hello", "world", "42"};
    char *sep = " ";
    char *result = ft_strjoin(3, strs, sep);

    if (result)
    {
        printf("Joined string: %s\n", result);
        free(result);
    }
    else
        printf("Memory allocation failed.\n");

    return 0;
}*/
