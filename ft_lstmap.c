/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cybattis <cybattis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:13:20 by cybattis          #+#    #+#             */
/*   Updated: 2021/11/09 19:11:26 by cybattis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	//t_list	*new_lst;
	t_list	*current;

	(void)del;
	current = lst;
	while (current)
	{
		f(current->content);
		current = current->next;
	}
	return (lst);
}
