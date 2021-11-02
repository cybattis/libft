/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 15:00:15 by cybattis          #+#    #+#             */
/*   Updated: 2021/11/02 15:25:58 by cybattis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_len(const char *str);
static char		*ft_strncat(char *dest, const char *src, size_t nb);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len1;
	size_t	len2;

	len1 = ft_len(s1);
	len2 = ft_len(s2);
	str = malloc(sizeof(char *) * (len1 + len2) + 1);
	if (!str)
		return (NULL);
	str[0] = 0;
	ft_strncat(str, s1, len1);
	ft_strncat(str, s2, len2);
	str[(len1 + len2) + 1] = 0;
	return (str);
}

static char	*ft_strncat(char *dest, const char *src, size_t nb)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_len(dest);
	if (*src)
	{
		while (i < nb && src[i])
			dest[j++] = src[i++];
		dest[j] = '\0';
	}
	return (dest);
}

static size_t	ft_len(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
