/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:41:06 by abhaifou          #+#    #+#             */
/*   Updated: 2025/02/23 15:41:33 by abhaifou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str) {

	int	i;

	i = 0;
    if (!str) 
        return 0;
    if (str[0] == '\0')
        return 1;

    while (str[i])
	{
        if (!(str[i] >= 'A' && str[i] <= 'Z')) {
            return 0;
        }
        i++;
    }
    return 1;
}
