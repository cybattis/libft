/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:52:13 by cybattis          #+#    #+#             */
/*   Updated: 2021/11/05 17:20:55 by cybattis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

static int	ft_nbrlen(long nb);
static void	reverse_str(char *str);

char	*ft_itoa(int n)
{
	char	*s;
	long	nb;
	int		len;
	int		i;

	i = 0;
	nb = n;
	len = ft_nbrlen(nb);
	s = malloc(sizeof(char) * (len + 1));
	if (!s)
	{
		free(s);
		return (NULL);
	}
	if (nb < 0)
		s[0] = '-';
	while (nb >= 10)
	{
		s[len - i] = (nb % 10) + '0';
		i++;
		nb /= 10;
	}
	s[len + 1] = '\0';
	reverse_str(s);
	ft_putstr_fd(s, STDOUT_FILENO);
	return (s);
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

	len = 0;
	if (nb < 0)
		len++;
	while (nb > 0)
	{
		len++;
		nb /= 10;
	}
	return (len);
}
