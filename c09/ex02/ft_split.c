/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:30:04 by abhaifou          #+#    #+#             */
/*   Updated: 2025/03/10 13:00:53 by abhaifou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char*charset)
{
	int	i;
	int	flag;
	int	count;

	count = 0;
	flag = 0;
	i = 0;
	while (str[i] == ' ')
		i++;
	while (str[i])
	{
		if (!is_sep(str[i], charset) && !flag)
		{
			count++;
			flag = 1;
		}
		else if (is_sep(str[i]), charset)
			flag = 0;
		i++;
	}
	return (count);
}

char	*fill_res(char *string, int start, int end)
{
	int		i;
	char	*str;

	i = 0;
	str = malloc(sizeof (char) * (end - start + 1));
	if (!str)
		return (NULL);
	while (start < end)
		str[i++] = string[start++];
	str[i] = '\0';
	return (str);
}

char	**ft_split(char *str, char *charset)
{
	int		size;
	char	**res;
	int		i;
	int		start;
	int		index;

	index = 0;
	size = count_words(str, charset);
	res = malloc(sizeof (char *) * (size + 1));
	i = 0;
	while (str[i] == ' ')
		i++;
	while (str[i])
	{
		while (str[i] && is_sep(str[i], charset))
			i++;
		start = i;
		while (str[i] && !is_sep(str[i], charset))
			i++;
		if (i > start)
			res[index++] = fill_res(str, start, i);
	}
	res[index] = 0;
	return (res);
}
/*
// Function to free memory after using ft_split
void free_split(char **res)
{
    int i = 0;
    while (res[i])
        free(res[i++]);
    free(res);
}

// Function to print results from ft_split
void print_split(char *str, char *charset)
{
    printf("Input: \"%s\"\n", str);
    printf("Charset: \"%s\"\n", charset);

    char **res = ft_split(str, charset);
    if (!res)
    {
        printf("Error: ft_split returned NULL\n");
        return;
    }

    int i = 0;
    while (res[i])
    {
        printf("Part[%d]: \"%s\"\n", i, res[i]);
        i++;
    }

    printf("Final element (should be NULL): %p\n\n", (void*)res[i]);
    free_split(res);
}

int main()
{
    // ✅ Basic test
    print_split("hello world this is a test", " ");

    // ✅ Multiple consecutive separators
    print_split("hello    world  this  is a   test", " ");

    // ✅ Separators at the beginning and end
    print_split("  hello world this is a test  ", " ");

    // ✅ Multiple different separators
    print_split("hello,world|this:is-a+test", ",|:-+");

    // ✅ Only separators in the string
    print_split(",,,,,,,,,", ",");

    // ✅ String with only one word
    print_split("hello", " ");

    // ✅ Empty input string
    print_split("", " ");

    // ✅ Charset containing all possible characters
    print_split("abcdefgh", "abcdefghijklmnopqrstuvwxyz");

    // ✅ No separators found in the input
    print_split("helloworld", ",");

    return 0;
}*/
