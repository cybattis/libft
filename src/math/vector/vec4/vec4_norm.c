/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4_norm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 15:23:19 by cybattis          #+#    #+#             */
/*   Updated: 2022/02/03 19:28:42 by cybattis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <math.h>

t_vec4	*vec4_normalize(t_vec4 *self)
{
	return (vec4_divf(self, vec4_mag(*self)));
}

t_vec4	vec4_normalized(t_vec4 v)
{
	float	mag;

	mag = vec4_mag(v);
	return (vec4(v.x / mag, v.y / mag, v.z / mag, v.w / mag));
}

float	vec4_mag(t_vec4 v)
{
	return (fabs(sqrt(v.x * v.x + v.y * v.y + v.z * v.z + v.w * v.w)));
}
