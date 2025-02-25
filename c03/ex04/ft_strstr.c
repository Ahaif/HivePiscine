/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 13:02:08 by abhaifou          #+#    #+#             */
/*   Updated: 2025/02/25 13:08:45 by abhaifou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*sub;

	if (!*to_find)
		return (str);
	while (*str)
	{
		s = str;
		sub = to_find;
		while (*s && *sub && *s == *sub)
		{
			s++;
			sub++;
		}
		if (!*sub)
			return (str);
		str++;
	}
	return (0);
}
