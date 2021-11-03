/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 17:21:25 by cybattis          #+#    #+#             */
/*   Updated: 2021/11/03 11:18:02 by cybattis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		word_count(const char *s, char c);

char	**ft_split(char const *s, char c)
{
	char	*start;
	char	**strs;
	int		i;

	i = 0;
	strs = malloc(sizeof(char *) * word_count(s, c) + 1);
	if (!strs)
		return (NULL);
	while (*s)
	{
		while (*s && s[i] == c)
			s++;
		start = (char *)s;
		while (*s && s[i] != c)
			s++;
		strs[i] = malloc(sizeof(char) * (s - start + 1));
		if (!strs[i])
			return (NULL);
		ft_strlcpy(strs[i], start, (s - start));
		strs[i][(s - start)] = '\0';
		if (start != s)
			i++;
	}
	strs[i] = 0;
	return (strs);
}

static int	word_count(const char *s, char c)
{
	int	i;
	int	words;
	int	is_word;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
		{
			i++;
			is_word = 0;
		}
		while (s[i] && s[i] != c)
		{
			i++;
			is_word = 1;
		}
		if (is_word == 1)
			words++;
	}
	return (words);
}
