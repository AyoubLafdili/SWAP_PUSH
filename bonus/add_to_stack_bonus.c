/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_to_stack_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:33:11 by alafdili          #+#    #+#             */
/*   Updated: 2024/04/18 21:15:26 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

static void	lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*temp;

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

static t_stack	*lstnew(int content)
{
	t_stack	*new_node;

	new_node = malloc(sizeof(t_stack));
	if (!new_node)
		return (NULL);
	new_node -> data = content;
	new_node -> target = NULL;
	new_node -> next = NULL;
	return (new_node);
}

t_stack	*add_to_stack(t_stack *head, int data)
{
	t_stack	*new_elem;

	new_elem = lstnew(data);
	if (!new_elem)
		return (list_clear(head, NULL, 0), NULL);
	lstadd_back(&head, new_elem);
	return (head);
}
