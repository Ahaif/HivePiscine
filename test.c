#include <unistd.h>
#include <stdio.h>


// #define TEST 10

// int ft_strlen(char*str);
// void ft_putstr(char *str);


int ft_strlen(char *str)
{
	int  index = 0;
	while(str[index] != '\0')
	{
		index++;
	}
		

	return index;
}

void ft_putstr(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}


int main()
{
	char str[] = "Hello";

	int result = ft_strlen(str);

	ft_putstr(str);
}




