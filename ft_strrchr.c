/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:09:34 by cybattis          #+#    #+#             */
/*   Updated: 2021/11/04 17:12:00 by cybattis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*pos;

	pos = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			pos = (char *)&s[i];
		i++;
	}
	if (s[i] == c)
		pos = (char *)&s[i];
	if (pos != NULL)
		return (pos);
	return (NULL);
}
