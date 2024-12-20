/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcossett <rcossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:17:55 by rcossett          #+#    #+#             */
/*   Updated: 2024/10/25 13:31:00 by rcossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	str = malloc(ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char	to_upper(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (toupper(c)); // Convertit en majuscule pour les index pairs
	else
		return (c);          // Laisse tel quel pour les index impairs
}

int	main(void)
{
	char	*str = "hello world";
	char	*result;
	
	result = ft_strmapi(str, to_upper);
	if (result == NULL)
	{
		printf("Erreur\n");
		return (1);
	}

	printf("Chaine originale: %s\n", str);
	printf("Chaine modifiee: %s\n", result);

	free(result);
	return (0);
} */