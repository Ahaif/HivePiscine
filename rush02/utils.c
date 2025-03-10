

#include "rush02.h"

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}


char *ft_strdup(char *src)
{
    int len = ft_strlen(src);
    char *dest = malloc(len + 1);
    int i = 0;
    if (!dest)
        return NULL;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}


int ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while (s1[i] && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}


void ft_putstr(char *str)
{
    write(1, str, ft_strlen(str));
}


void print_error(char *msg)
{
    ft_putstr(msg);
}
