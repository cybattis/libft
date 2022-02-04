/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 19:58:59 by cybattis          #+#    #+#             */
/*   Updated: 2022/02/04 12:51:39 by cybattis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	print_matrix44(t_matrix44f m);

int	main(void)
{
	t_vec4		p;
	t_vec4		v = vec4(1, 2, 3, 4);

	float		m1[4][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
	float		m2[4][4] = {{16,15,14,13}, {12,11,10,9}, {8,7,6,5}, {4,3,2,1}};
	t_matrix	out;

	ft_printf("m1\n");
	print_matrix44(m1);

	ft_printf("\nm2\n");
	print_matrix44(m2);

	ft_printf("\nout\n");
	matrix_mult44(m1, m2, &out);
	print_matrix44(out.m);

	ft_printf("\nvec4\n");
	p = matrix_mult44v4(&v, m1);
	ft_dprintf(1, "[%3d, %3d, %3d, %3d]\n",
		(int)p.x, (int)p.y, (int)p.z, (int)p.w);
	return (0);
}

static void	print_matrix44(t_matrix44f m)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		ft_dprintf(1, "[%3d, %3d, %3d, %3d]\n",
			(int)m[i][0], (int)m[i][1], (int)m[i][2], (int)m[i][3]);
		i++;
	}
}
