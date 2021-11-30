/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:36:46 by cybattis          #+#    #+#             */
/*   Updated: 2021/11/30 16:59:09 by cybattis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../../includes/libft.h"
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

# define MINUS		0
# define ALT		1
# define SPACE		2
# define PLUS		3
# define ZERO		4
# define PRECI		5
# define FIELD		6

# define U_INT		unsigned int

typedef struct s_printf
{
	const char	*str;
	size_t		len;
	va_list		args;
	int			flags[7];
	int			dot;
}	t_printf;

/* ft_printf.c */
t_printf	*init_data(const char *format, int (*g_func[8])(t_printf *));
int			ft_conversion(t_printf *p, int (*g_func[8])(t_printf *));

/* conv_func.c */
int			ft_int(t_printf *p);
int			ft_uint(t_printf *p);
int			ft_str(t_printf *p);
int			ft_ch(t_printf *p);
int			ft_percent(t_printf *p);

/* conv_func2.c */
int			ft_lower_hex(t_printf *p);
int			ft_upper_hex(t_printf *p);
int			ft_addr(t_printf *p);

/* utils.c */
int			ft_max(int n1, int n2);
void		print_char(t_printf *p);
void		ft_uputnbr(unsigned int nb);
int			ft_nbrlen_base(size_t nbr, size_t base_size);
void		ft_putnbr_hex(size_t nbr, char *base, size_t size);

/* ft_get_flags.c */
int			ft_get_flag(t_printf *p);
int			ft_check_flag(t_printf *p, int cs);

/* ft_print_flags.c */
int			ft_print_negfield(t_printf *p);
void		ft_print_str_field(t_printf *p, int len);
void		ft_print_field(t_printf *p, int len);
void		ft_print_precision(t_printf *p, int len, int nb);
void		ft_print_uprecision(t_printf *p, unsigned int len);

/* ft_print_flags2.c */
int			ft_print_signe(t_printf *p, int nb);
int			ft_print_usigne(t_printf *p);
int			ft_print_str_precision(t_printf *p, char *s, int len);
int			ft_print_hex_field(t_printf *p, U_INT len, char *alt, U_INT nb);

#endif
