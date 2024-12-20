/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcossett <rcossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:04:52 by rcossett          #+#    #+#             */
/*   Updated: 2024/10/09 17:41:28 by rcossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*ptr1;
	const unsigned char	*ptr2;

	if (len == 0 || dst == src)
		return (dst);
	ptr1 = (unsigned char *)dst;
	ptr2 = (const unsigned char *)src;
	if (ptr1 > ptr2)
	{
		while (len--)
			ptr1[len] = ptr2[len];
	}
	else
	{
		while (len--)
			*ptr1++ = *ptr2++;
	}
	return (dst);
}
