/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft-split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 13:29:27 by abhaifou          #+#    #+#             */
/*   Updated: 2025/03/07 09:44:47 by abhaifou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count;
	int	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (str[i])
	{
		if (!is_separator(str[i], charset) && !in_word)
		{
			count++;
			in_word = 1;
		}
		else if (is_separator(str[i], charset))
			in_word = 0;
		i++;
	}
	return (count);
}

char	*copy_word(char *str, int start, int end)
{
	char	*word;
	int		i;

	word = (char *)malloc((end - start + 1) * sizeof(char));
	i = 0;
	if (!word)
		return (NULL);
	while (start < end)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		word_count;
	char	**result;
	int		i;
	int		start;
	int		word_index;

	word_count = count_words(str, charset);
	i = 0;
	start = 0;
	word_index = 0;
	result = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (str[i])
	{
		while (str[i] && is_separator(str[i], charset))
			i++;
		start = i;
		while (str[i] && !is_separator(str[i], charset))
			i++;
		if (start < i)
			result[word_index++] = copy_word(str, start, i);
	}
	result[word_index] = NULL;
	return (result);
}
