/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 15:00:15 by cybattis          #+#    #+#             */
/*   Updated: 2021/11/03 11:47:11 by cybattis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = malloc(sizeof(char *) * (len1 + len2) + 1);
	if (!str)
		return (NULL);
	str[0] = 0;
	ft_strlcat(str, s1, len1);
	ft_strlcat(str, s2, len2);
	str[(len1 + len2) + 1] = 0;
	return (str);
}
