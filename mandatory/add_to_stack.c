/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_to_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 21:53:10 by alafdili          #+#    #+#             */
/*   Updated: 2024/03/01 21:53:24 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back(t_stack **lst, t_stack *new)
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

t_stack	*ft_lstnew(int content)
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

	new_elem = ft_lstnew(data);
	ft_lstadd_back(&head, new_elem);
	return (head);
}
