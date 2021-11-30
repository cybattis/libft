/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_func2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 17:41:07 by cybattis          #+#    #+#             */
/*   Updated: 2021/11/30 15:21:39 by cybattis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lower_hex(t_printf *p)
{
	unsigned int	nb;
	int				len;

	nb = va_arg(p->args, unsigned int);
	len = ft_nbrlen_base(nb, 16);
	p->len += len;
	ft_print_hex_field(p, len, "0x", nb);
	ft_print_uprecision(p, len);
	ft_putnbr_hex(nb, "0123456789abcdef", 16);
	ft_print_negfield(p);
	return (0);
}

int	ft_upper_hex(t_printf *p)
{
	unsigned int	nb;
	int				len;

	nb = va_arg(p->args, unsigned int);
	len = ft_nbrlen_base(nb, 16);
	p->len += len;
	ft_print_hex_field(p, len, "0X", nb);
	ft_print_uprecision(p, len);
	ft_putnbr_hex(nb, "0123456789ABCDEF", 16);
	ft_print_negfield(p);
	return (0);
}

int	ft_addr(t_printf *p)
{
	size_t	nb;
	int		len;

	nb = va_arg(p->args, size_t);
	len = ft_nbrlen_base(nb, 16);
	p->len += len + 2;
	p->flags[FIELD] -= 2;
	ft_print_field(p, len);
	ft_putstr("0x");
	ft_putnbr_hex(nb, "0123456789abcdef", 16);
	ft_print_negfield(p);
	return (0);
}
