/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:46:46 by abhaifou          #+#    #+#             */
/*   Updated: 2025/02/23 15:48:37 by abhaifou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcapitalize(char *str) {
    int i;
    int new_word;

	i = 0;
	new_word = 1;
    if (!str)
        return str;
    while (str[i]) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9')) {
            if (new_word && (str[i] >= 'a' && str[i] <= 'z')) {
                str[i] = str[i] - 32;
            }
            new_word = 0;
        } else {
            new_word = 1;
        }
        i++;
    }
    return str;
}