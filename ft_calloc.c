/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcossett <rcossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:34:48 by rcossett          #+#    #+#             */
/*   Updated: 2024/10/25 12:58:37 by rcossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*byte_ptr;
	void			*ptr;
	size_t			total_size;
	size_t			i;

	total_size = count * size;
	ptr = malloc(total_size);
	i = 0;
	if (!ptr)
		return (NULL);
	byte_ptr = (unsigned char *)ptr;
	while (i < total_size)
		byte_ptr[i++] = 0;
	return (ptr);
}
