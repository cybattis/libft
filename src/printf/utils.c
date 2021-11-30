/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:15:41 by cybattis          #+#    #+#             */
/*   Updated: 2021/11/30 15:20:29 by cybattis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_max(int n1, int n2)
{
	if (n1 > n2)
		return (n1);
	return (n2);
}

void	print_char(t_printf *p)
{
	p->len++;
	ft_putchar(p->str[0]);
}

void	ft_uputnbr(unsigned int nb)
{
	char	c;

	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = nb % 10 + '0';
	ft_putchar(c);
}

int	ft_nbrlen_base(size_t nbr, size_t base_size)
{
	int	i;

	i = 1;
	while (nbr >= base_size)
	{
		nbr /= base_size;
		i++;
	}
	return (i);
}

void	ft_putnbr_hex(size_t nb, char *base, size_t size)
{
	if (nb >= size)
	{
		ft_putnbr_hex(nb / size, base, size);
		ft_putchar(base[nb % size]);
	}
	else
		ft_putchar(base[nb % size]);
}
