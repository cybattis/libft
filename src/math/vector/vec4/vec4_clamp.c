/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4_clamp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 15:23:46 by cybattis          #+#    #+#             */
/*   Updated: 2022/01/14 15:53:54 by cybattis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vec4	*vec4_clamp_max(t_vec4 *v, t_vec4 clamp)
{
	if (v->x > clamp.x)
		v->x = clamp.x;
	if (v->y > clamp.y)
		v->y = clamp.y;
	if (v->z > clamp.z)
		v->z = clamp.z;
	if (v->w > clamp.w)
		v->w = clamp.w;
	return (v);
}

t_vec4	*vec4_clamp_min(t_vec4 *v, t_vec4 clamp)
{
	if (v->x < clamp.x)
		v->x = clamp.x;
	if (v->y < clamp.y)
		v->y = clamp.y;
	if (v->z < clamp.z)
		v->z = clamp.z;
	if (v->w < clamp.w)
		v->w = clamp.w;
	return (v);
}
