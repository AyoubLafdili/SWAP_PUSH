/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 12:04:23 by alafdili          #+#    #+#             */
/*   Updated: 2024/03/01 21:56:03 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_pos(t_stack *stack, int node)
{
	int	pos;

	pos = 0;
	while (stack && stack -> data != node)
	{
		stack = stack -> next;
		pos++;
	}
	return (pos);
}

static t_stack	*min_num(t_stack *head_a)
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

void	check_sort(t_stack **stack_a)
{
	t_stack	*min;

	min = min_num(*stack_a);
	while (*stack_a != min)
	{
		if (get_pos(*stack_a, min -> data) <= list_size(*stack_a) / 2)
			ft_ra(stack_a);
		else
			ft_rra(stack_a);
	}
}
