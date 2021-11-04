/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 17:17:21 by cybattis          #+#    #+#             */
/*   Updated: 2021/11/03 11:15:10 by cybattis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	dest_size;
	unsigned int	src_size;

	src_size = ft_strlen(src);
	dest_size = ft_strlen(dst);
	if (size <= dest_size)
		return (size + src_size);
	if (*src)
	{
		dst += dest_size;
		size -= dest_size;
		while (*src && (size - 1) > 0)
		{
			*dst++ = *src++;
			size--;
		}
		*dst = '\0';
	}
	return (dest_size + src_size);
}
