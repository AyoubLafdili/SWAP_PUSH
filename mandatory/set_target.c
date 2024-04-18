/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_target.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:03:02 by alafdili          #+#    #+#             */
/*   Updated: 2024/04/18 17:03:05 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*min_target(t_stack *head_a)
{
	t_stack	*min_node;

	min_node = head_a;
	min_node -> data = head_a -> data;
	while (head_a != NULL)
	{
		if (head_a -> data < min_node -> data)
			min_node = head_a;
		head_a = head_a -> next;
	}
	return (min_node);
}

void	func_rest(t_stack *a_cp, t_stack *b_cp)
{
	while (a_cp != NULL)
	{
		if (b_cp -> target == NULL && a_cp -> data > b_cp -> data)
		{
			b_cp -> target = a_cp;
			a_cp = a_cp -> next;
		}
		else if (b_cp -> target != NULL
			&& (a_cp -> data > b_cp -> data
				&& a_cp -> data < b_cp -> target -> data))
		{
			b_cp -> target = a_cp;
			a_cp = a_cp -> next;
		}
		else
			a_cp = a_cp -> next;
	}
}

void	set_target(t_stack *head_a, t_stack *head_b)
{
	t_stack	*b_cp;
	t_stack	*a_cp;

	b_cp = head_b;
	while (b_cp != NULL)
	{
		a_cp = head_a;
		b_cp -> target = NULL;
		func_rest(a_cp, b_cp);
		if (b_cp -> target == NULL)
			b_cp -> target = min_target(head_a);
		b_cp = b_cp -> next;
	}
}
