/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:49:44 by cybattis          #+#    #+#             */
/*   Updated: 2021/11/02 16:55:17 by cybattis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *src, int cpy, size_t n)
{
	unsigned char	*s;
	unsigned char	c;

	s = src;
	c = cpy;
	while (n > 0)
	{
		*s = c;
		s++;
		n--;
	}
	return (src);
}
