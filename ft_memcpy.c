/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcossett <rcossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:04:33 by rcossett          #+#    #+#             */
/*   Updated: 2024/10/09 17:38:25 by rcossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*ptr1;
	const unsigned char	*ptr2;

	if (n == 0 || dst == src)
		return (dst);
	ptr1 = (unsigned char *)dst;
	ptr2 = (const unsigned char *)src;
	while (n--)
	{
		*ptr1++ = *ptr2++;
	}
	return (dst);
}
