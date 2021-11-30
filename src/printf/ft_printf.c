/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:33:34 by cybattis          #+#    #+#             */
/*   Updated: 2021/11/30 15:20:47 by cybattis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	size_t		len;
	t_printf	*p;
	int			(*g_func[8])(t_printf *);

	p = init_data(format, g_func);
	if (!p)
		return (-1);
	va_start(p->args, format);
	while (p->str[0])
	{
		if (p->str[0] != '%')
			print_char(p);
		else
			ft_conversion(p, g_func);
		if (p->str[0] == 0)
			break ;
		p->str++;
	}
	len = p->len;
	va_end(p->args);
	free(p);
	return (len);
}

t_printf	*init_data(const char *format, int (*g_func[8])(t_printf *))
{
	t_printf	*p;

	g_func[0] = &ft_int;
	g_func[1] = &ft_uint;
	g_func[2] = &ft_int;
	g_func[3] = &ft_str;
	g_func[4] = &ft_ch;
	g_func[5] = &ft_percent;
	g_func[6] = &ft_lower_hex;
	g_func[7] = &ft_upper_hex;
	g_func[8] = &ft_addr;
	p = malloc(sizeof(t_printf) * 1);
	if (!p)
		return (NULL);
	p->str = format;
	p->len = 0;
	p->dot = 0;
	return (p);
}

int	ft_conversion(t_printf *p, int (*g_func[8])(t_printf *))
{
	int		cs;

	p->str++;
	if (p->str[0] == 0)
		return (0);
	ft_get_flag(p);
	cs = ft_strichr("iudsc%xXp", p->str[0]);
	if (cs >= 0)
		return (g_func[cs](p));
	return (-1);
}
