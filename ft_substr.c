/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:30:09 by cybattis          #+#    #+#             */
/*   Updated: 2021/11/05 17:28:29 by cybattis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)
		return (NULL);
	str = malloc(sizeof(char) * len + 1); // TO DO: malloc when s < len
	if (!str)
		return (NULL);
	if (start >= ft_strlen(s))
		return (str);
	ft_strlcpy(str, &s[start], len + 1);
	return (str);
}
