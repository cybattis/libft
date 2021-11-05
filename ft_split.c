/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 17:21:25 by cybattis          #+#    #+#             */
/*   Updated: 2021/11/05 16:50:27 by cybattis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(const char *s, char c);
static void		*free_all(char **strs, size_t i);
static void		get_word(char **strs, const char *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**strs;

	if (!s)
		return (NULL);
	strs = malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!strs)
	{
		free(strs);
		return (NULL);
	}
	get_word(strs, s, c);
	return (strs);
}

static void	get_word(char **strs, const char *s, char c)
{
	char	*start;
	size_t	i;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		start = (char *)s;
		while (*s && *s != c)
			s++;
		strs[i] = malloc(sizeof(char) * (s - start + 1));
		if (!strs[i])
			free_all(strs, i);
		ft_strlcpy(strs[i], start, (s - start) + 1);
		if (start != s)
			i++;
	}
	strs[i] = 0;
}

static void	*free_all(char **strs, size_t i)
{
	while (i--)
	{
		free(strs[i]);
	}
	free(strs[i]);
	free(strs);
	return (NULL);
}

static size_t	word_count(const char *s, char c)
{
	int	i;
	int	words;
	int	is_word;

	i = 0;
	is_word = 0;
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
