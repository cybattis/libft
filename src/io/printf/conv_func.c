/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 16:46:04 by cybattis          #+#    #+#             */
/*   Updated: 2022/01/11 14:13:13 by cybattis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_int(t_printf *p, int fd)
{
	int	nb;
	int	len;

	nb = va_arg(p->args, int);
	len = ft_nbrlen(nb);
	p->len += len;
	ft_print_signe(p, nb, fd);
	if (nb < 0 && p->flags[PRECI] > len - 1 && p->flags[MINUS] == 0)
		p->flags[FIELD]--;
	if (nb < 0 && p->flags[ZERO] == 1)
		ft_putchar_fd('-', fd);
	ft_print_field(p, len, fd);
	if (p->flags[PLUS] == 1 && nb >= 0 && p->flags[ZERO] == 0)
		ft_putchar_fd('+', fd);
	if (nb < 0 && p->flags[ZERO] == 0)
		ft_putchar_fd('-', fd);
	ft_print_precision(p, len, nb, fd);
	if (nb < 0)
		ft_uputnbr(-nb, fd);
	else
		ft_putnbr(nb);
	ft_print_negfield(p, fd);
	return (0);
}

int	ft_uint(t_printf *p, int fd)
{
	unsigned int	nb;
	int				len;

	nb = va_arg(p->args, unsigned int);
	len = ft_nbrlen(nb);
	p->len += len;
	ft_print_field(p, len, fd);
	ft_print_uprecision(p, len, fd);
	ft_uputnbr(nb, fd);
	ft_print_negfield(p, fd);
	return (0);
}

int	ft_str(t_printf *p, int fd)
{
	char	*s;
	int		len;

	s = va_arg(p->args, char *);
	if (s)
	{
		len = ft_strlen(s);
		p->len += len;
		ft_print_str_field(p, len, fd);
		if (!ft_print_str_precision(p, s, len, fd))
			ft_putstr(s);
		ft_print_negfield(p, fd);
		return (0);
	}
	p->len += 6;
	ft_putstr("(null)");
	return (-1);
}

int	ft_ch(t_printf *p, int fd)
{
	p->len++;
	ft_print_field(p, 1, fd);
	ft_putchar_fd(va_arg(p->args, int), fd);
	ft_print_negfield(p, fd);
	return (0);
}

int	ft_percent(t_printf *p, int fd)
{
	p->len++;
	ft_putchar_fd('%', fd);
	return (0);
}
