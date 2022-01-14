/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_clamp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 15:23:46 by cybattis          #+#    #+#             */
/*   Updated: 2022/01/14 15:23:54 by cybattis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vec3	*vec3_clamp_max(t_vec3 *v, double x, double y, double z)
{
	if (v->x > x)
		v->x = x;
	if (v->y > y)
		v->y = y;
	if (v->z > z)
		v->z = z;
	return (v);
}

t_vec3	*vec3_clamp_min(t_vec3 *v, double x, double y, double z)
{
	if (v->x < x)
		v->x = x;
	if (v->y < y)
		v->y = y;
	if (v->z < z)
		v->z = z;
	return (v);
}
