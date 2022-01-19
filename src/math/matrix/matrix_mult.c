/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_mult.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 18:25:59 by cybattis          #+#    #+#             */
/*   Updated: 2022/01/17 18:50:19 by cybattis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vec3	*matrix_mult(t_vec3 v, t_vec3 *projection)
{
	t_vec3	*p;

	p = vec3_multv3(v, projection[0]);
	p = vec3_add(vec3_multv3(v, projection[1]), *p);
	p = vec3_add(vec3_multv3(v, projection[2]), *p);
	return (p);
}
