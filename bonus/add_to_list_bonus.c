/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_to_list_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:21:32 by alafdili          #+#    #+#             */
/*   Updated: 2024/04/19 12:58:49 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	lstadd_back(t_ops **lst, t_ops *new)
{
	t_ops	*temp;

	if (!lst)
		return ;
	if (!(*lst))
		*lst = new;
	else
	{
		temp = (*lst);
		while (temp -> next)
			temp = temp -> next;
		temp -> next = new;
	}
}

t_ops	*lstnew(char *content)
{
	t_ops	*new_node;

	new_node = malloc(sizeof(t_ops));
	if (!new_node)
		return (NULL);
	new_node -> content = content;
	new_node -> next = NULL;
	return (new_node);
}

t_ops	*add_to_list(t_ops *head, char *data)
{
	t_ops	*new_elem;

	new_elem = lstnew(data);
	if (!new_elem)
		return (list_clear(NULL, head, 1), NULL);
	lstadd_back(&head, new_elem);
	return (head);
}
