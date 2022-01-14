/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_norm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 15:26:34 by cybattis          #+#    #+#             */
/*   Updated: 2022/01/14 16:23:23 by cybattis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <math.h>

t_vec2	*vec2_normalize(t_vec2 *self)
{
	return (vec2_divf(self, vec2_mag(*self)));
}

t_vec2	vec2_normalized(t_vec2 v)
{
	double	mag;

	mag = vec2_mag(v);
	return (vec2(v.x / mag, v.y / mag));
}

double	vec2_mag(t_vec2 v)
{
	return (fabs(sqrt(v.x * v.x + v.y * v.y)));
}
