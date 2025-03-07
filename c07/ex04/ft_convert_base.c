/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhaifou <abhaifou@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 10:48:18 by abhaifou          #+#    #+#             */
/*   Updated: 2025/03/06 11:58:04 by abhaifou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_valid_base(char *base);
int	get_index(char c, char *base);
int	ft_atoi_base(char *nbr, char *base_from);

int	get_int_len(int num, int base_len)
{
	int	len;

	len = 0;
	if (num <= 0)
		len = 1;
	while (num)
	{
		num /= base_len;
		len++;
	}
	return (len);
}

char	*ft_itoa_base(int num, char *base_to)
{
	int	base_len;
	int	len;
	char	*res;
	int	is_negative;

	base_len = is_valid_base(base_to);
	len = get_int_len(num, base_len);
	res = (char *)malloc(len + 1);
	is_negative = (num < 0);
	if (!res || base_len < 2)
		return (NULL);
	res[len] = '\0';
	if (num == 0)
		res[0] = base_to[0];
	if (is_negative)
		num = -num;
	while (num)
	{
		res[--len] = base_to[num % base_len];
		num /= base_len;
	}
	if (is_negative)
		res[0] = '-';
	return (res);
}

char	*ft_convert_base(char	*nbr, char *base_from, char *base_to)
{
	int	num;

	if (!is_valid_base(base_from) || !is_valid_base(base_to))
		return (NULL);
	num = ft_atoi_base(nbr, base_from);
	return (ft_itoa_base(num, base_to));
}



//#include <stdio.h>

/*void test_case(char *nbr, char *base_from, char *base_to, char *expected)
{
    char *result = ft_convert_base(nbr, base_from, base_to);
    printf("Convert '%s' from base '%s' to base '%s' → Result: %s | Expected: %s\n",
           nbr, base_from, base_to, result ? result : "NULL", expected);
    free(result);
}*/
/*
int main()
{
    printf("==== Testing ft_convert_base ====\n\n");

    // ✅ Basic Conversions
    test_case("101", "01", "0123456789", "5"); // Binary to Decimal
    test_case("-42", "0123456789", "01", "-101010"); // Decimal to Binary
    test_case("2A", "0123456789ABCDEF", "0123456789", "42"); // Hex to Decimal
    test_case("42", "0123456789", "0123456789ABCDEF", "2A"); // Decimal to Hex
    test_case("177", "01234567", "0123456789", "127"); // Octal to Decimal
    test_case("127", "0123456789", "01234567", "177"); // Decimal to Octal

    // ✅ Handling Spaces and Signs
    test_case("   -100", "0123456789", "01", "-1100100"); // Decimal to Binary with spaces
    test_case("   +2A", "0123456789ABCDEF", "0123456789", "42"); // Hex with leading spaces

    // ✅ Large Numbers
    test_case("ZZZ", "ABCDEFGHIJKLMNOPQRSTUVWXYZ", "0123456789", "17575"); // Base 26 to Decimal
    test_case("123456789", "0123456789", "0123456789ABCDEF", "75BCD15"); // Large Decimal to Hex

    // ✅ Edge Cases
    test_case("0", "0123456789", "01", "0"); // Zero
    test_case("-0", "0123456789", "01", "0"); // Negative zero
    test_case("10", "01", "01", "10"); // Same base
    test_case("42", "0123456789", "0123456789", "42"); // Same base

    // ✅ Invalid Inputs
    test_case("invalid", "0123456789", "01", "NULL"); // Invalid characters
    test_case("42", "0", "01", "NULL"); // Invalid base
    test_case("42", "0123456789", "0123456789ABCDEF+", "NULL"); // Invalid base characters
    test_case("42", "0123456789", "01234 6789", "NULL"); // Base with spaces

    return 0;
}
*/
