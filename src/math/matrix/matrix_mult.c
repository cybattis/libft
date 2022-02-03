/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_mult.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 18:25:59 by cybattis          #+#    #+#             */
/*   Updated: 2022/02/03 23:41:25 by cybattis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	matrix_mult44(t_matrix44f m1, t_matrix44f m2, t_matrix44f out)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		out[i][0] = m1[i][0] * m2[0][0] + m1[i][1] * m2[1][0]
			+ m1[i][2] * m2[2][0] + m1[i][3] * m2[3][0];
		out[i][1] = m1[i][0] * m2[0][1] + m1[i][1] * m2[1][1]
			+ m1[i][2] * m2[2][1] + m1[i][3] * m2[3][1];
		out[i][2] = m1[i][0] * m2[0][2] + m1[i][1] * m2[1][2]
			+ m1[i][2] * m2[2][2] + m1[i][3] * m2[3][2];
		out[i][3] = m1[i][0] * m2[0][3] + m1[i][1] * m2[1][3]
			+ m1[i][2] * m2[2][3] + m1[i][3] * m2[3][3];
		i++;
	}
}

t_vec3	*matrix_multv3(const t_vec3 *v, t_matrix44f m)
{
	float	w;
	t_vec3	*out;

	out->x = v->x * m[0][0] + v->y * m[0][1] + v->z * m[0][2] + m[0][3];
	out->y = v->x * m[1][0] + v->y * m[1][1] + v->z * m[1][2] + m[1][3];
	out->z = v->x * m[2][0] + v->y * m[2][1] + v->z * m[2][2] + m[2][3];
	w = v->x * m[3][0] + v->y * m[3][1] + v->z * m[3][2] + m[3][3];
	if (w != 1)
	{
		out->x /= w;
		out->y /= w;
		out->z /= w;
	}
	return (out);
}

t_vec4	*matrix_multv4(const t_vec4 *v, t_matrix44f m)
{
	t_vec4	*out;

	out->x = v->x * m[0][0] + v->y * m[0][1] + v->z * m[0][2] + m[0][3];
	out->y = v->x * m[1][0] + v->y * m[1][1] + v->z * m[1][2] + m[1][3];
	out->z = v->x * m[2][0] + v->y * m[2][1] + v->z * m[2][2] + m[2][3];
	out->w = v->x * m[3][0] + v->y * m[3][1] + v->z * m[3][2] + m[3][3];
	if (out->w != 1)
	{
		out->x /= out->w;
		out->y /= out->w;
		out->z /= out->w;
	}
	return (out);
}
