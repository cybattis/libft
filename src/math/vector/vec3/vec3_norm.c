/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_norm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 15:23:19 by cybattis          #+#    #+#             */
/*   Updated: 2022/01/14 16:22:47 by cybattis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <math.h>

t_vec3	*vec3_normalize(t_vec3 *self)
{
	return (vec3_divf(self, vec3_mag(*self)));
}

t_vec3	vec3_normalized(t_vec3 v)
{
	double	mag;

	mag = vec3_mag(v);
	return (vec3(v.x / mag, v.y / mag, v.z / mag));
}

double	vec3_mag(t_vec3 v)
{
	return (fabs(sqrt(v.x * v.x + v.y * v.y + v.z * v.z)));
}
