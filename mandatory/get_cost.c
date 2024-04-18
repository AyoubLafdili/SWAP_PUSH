/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_cost.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:26:09 by alafdili          #+#    #+#             */
/*   Updated: 2024/04/18 17:06:09 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_move(t_stack *head, int content)
{
	int	size;
	int	pos;

	pos = 0;
	size = list_size(head);
	while (head && head -> data != content)
	{
		head = head -> next;
		pos++;
	}
	if (pos <= size - pos)
		return (pos);
	else
		return (size - pos);
}

t_stack	*get_cost(t_stack *stack_a, t_stack *stack_b)
{
	t_stack	*head_b;
	t_stack	*lowest;
	int		min_cost;
	int		temp;

	head_b = stack_b;
	lowest = head_b;
	min_cost = get_move(stack_b, head_b -> data)
		+ get_move(stack_a, head_b -> target -> data);
	while (head_b)
	{
		temp = get_move(stack_b, head_b -> data)
			+ get_move(stack_a, head_b -> target -> data);
		if (temp < min_cost)
		{
			min_cost = temp;
			lowest = head_b;
			head_b = head_b -> next;
		}
		else
			head_b = head_b -> next;
	}
	return (lowest);
}
