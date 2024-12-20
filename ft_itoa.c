/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcossett <rcossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:25:44 by rcossett          #+#    #+#             */
/*   Updated: 2024/10/15 12:15:33 by rcossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_is_neg(int n, int *is_negative)
{
	*is_negative = 0;
	if (n < 0)
	{
		*is_negative = 1;
		return ((long)n * -1);
	}
	return ((long)n);
}

static int	ft_intlen(long nbr)
{
	int	count;

	count = 0;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		is_negative;
	int		len;
	long	num;

	num = ft_is_neg(n, &is_negative);
	len = ft_intlen(num) + is_negative;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len > is_negative)
	{
		str[--len] = (num % 10) + '0';
		num /= 10;
	}
	if (is_negative)
		str[0] = '-';
	return (str);
}

/* #include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *result;

    // Test pour un nombre positif
    result = ft_itoa(12345);
    printf("ft_itoa(12345) = %s\n", result);
    free(result);

    // Test pour un nombre négatif
    result = ft_itoa(-9876);
    printf("ft_itoa(-9876) = %s\n", result);
    free(result);

    // Test pour zéro
    result = ft_itoa(0);
    printf("ft_itoa(0) = %s\n", result);
    free(result);

    // Test pour INT_MAX
    result = ft_itoa(2147483647);
    printf("ft_itoa(INT_MAX) = %s\n", result);
    free(result);

    // Test pour INT_MIN
    result = ft_itoa(-2147483648);
    printf("ft_itoa(INT_MIN) = %s\n", result);
    free(result);

    return 0;
} */