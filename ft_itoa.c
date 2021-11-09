/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:52:13 by cybattis          #+#    #+#             */
/*   Updated: 2021/11/09 19:15:50 by cybattis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrlen(long nb);
static void	reverse_str(char *str);
static int	itoa_recu(char *s, long n, int i);

char	*ft_itoa(int n)
{
	char	*s;
	int		len;
	int		i;

	i = 0;
	len = ft_nbrlen(n);
	s = malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	itoa_recu(s, n, i);
	if (n < 0)
		s[len - 1] = '-';
	s[len] = 0;
	reverse_str(s);
	return (s);
}

static int	itoa_recu(char *s, long nb, int i)
{
	if (nb < 0)
		nb = -nb;
	if (nb >= 10)
		itoa_recu(s, nb / 10, i + 1);
	s[i] = nb % 10 + '0';
	return (0);
}

static void	reverse_str(char *str)
{
	int	c;
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(str) - 1;
	while (i < j)
	{
		c = str[i];
		str[i++] = str[j];
		str[j--] = c;
	}
}

static int	ft_nbrlen(long nb)
{
	int	len;

	len = 1;
	if (nb < 0)
	{
		len++;
		nb = -nb;
	}
	while (nb >= 10)
	{
		len++;
		nb /= 10;
	}
	return (len);
}
