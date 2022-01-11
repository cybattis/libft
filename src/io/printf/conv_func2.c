/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_func2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 17:41:07 by cybattis          #+#    #+#             */
/*   Updated: 2022/01/11 14:15:08 by cybattis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lower_hex(t_printf *p, int fd)
{
	unsigned int	nb;
	int				len;

	nb = va_arg(p->args, unsigned int);
	len = ft_nbrlen_base(nb, 16);
	p->len += len;
	ft_print_hex_field(p, len, "0x", nb, fd);
	ft_print_uprecision(p, len, fd);
	ft_putnbr_hex(nb, "0123456789abcdef", 16, fd);
	ft_print_negfield(p, fd);
	return (0);
}

int	ft_upper_hex(t_printf *p, int fd)
{
	unsigned int	nb;
	int				len;

	nb = va_arg(p->args, unsigned int);
	len = ft_nbrlen_base(nb, 16);
	p->len += len;
	ft_print_hex_field(p, len, "0X", nb, fd);
	ft_print_uprecision(p, len, fd);
	ft_putnbr_hex(nb, "0123456789ABCDEF", 16, fd);
	ft_print_negfield(p, fd);
	return (0);
}

int	ft_addr(t_printf *p, int fd)
{
	size_t	nb;
	int		len;

	nb = va_arg(p->args, size_t);
	len = ft_nbrlen_base(nb, 16);
	p->len += len + 2;
	p->flags[FIELD] -= 2;
	ft_print_field(p, len, fd);
	ft_putstr("0x");
	ft_putnbr_hex(nb, "0123456789abcdef", 16, fd);
	ft_print_negfield(p, fd);
	return (0);
}
