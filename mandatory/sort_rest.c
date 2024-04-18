/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_rest.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 19:16:34 by alafdili          #+#    #+#             */
/*   Updated: 2024/04/18 17:03:25 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_pos(t_stack *stack, int node)
{
	int	pos;

	pos = 0;
	while (stack && stack -> data != node)
	{
		stack = stack -> next;
		pos++;
	}
	if (pos <= list_size(stack) / 2)
		return (0);
	else
		return (1);
}

void	sub_action(t_stack **stack_a, t_stack **stack_b, t_stack *best)
{
	if (!get_pos(*stack_a, best -> target -> data)
		&& !get_pos(*stack_b, best -> data))
		ft_rr(stack_a, stack_b);
	else if (get_pos(*stack_a, best -> target -> data)
		&& get_pos(*stack_b, best -> data))
		ft_rrr(stack_a, stack_b);
	else if (!get_pos(*stack_a, best -> target -> data)
		&& get_pos(*stack_b, best -> data))
	{
		ft_rrb(stack_b);
		ft_ra(stack_a);
	}
	else if (get_pos(*stack_a, best -> target -> data)
		&& !get_pos(*stack_b, best -> data))
	{
		ft_rb(stack_b);
		ft_rra(stack_a);
	}
}

void	aplly_action(t_stack **stack_a, t_stack **stack_b, t_stack *best)
{
	while (*stack_a != best -> target || *stack_b != best)
	{
		if (*stack_a != best -> target && *stack_b != best)
			sub_action(stack_a, stack_b, best);
		else if (*stack_a == best -> target && !get_pos(*stack_b, best -> data))
			ft_rb(stack_b);
		else if (*stack_a == best -> target && get_pos(*stack_b, best -> data))
			ft_rrb(stack_b);
		else if (*stack_b == best && !get_pos(*stack_a, best -> target -> data))
			ft_ra(stack_a);
		else
			ft_rra(stack_a);
	}
}

void	b_to_a(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*best;

	while (*stack_b)
	{
		set_target(*stack_a, *stack_b);
		best = get_cost(*stack_a, *stack_b);
		aplly_action(stack_a, stack_b, best);
		ft_pa(stack_a, stack_b);
	}
}

void	srt_rest(t_stack **stack_a, t_stack **stack_b)
{
	int	min;
	int	max;

	max = 0;
	min = 0;
	while (list_size(*stack_a) > 3)
	{
		get_max_min(*stack_a, &min, &max);
		ft_pb(stack_a, stack_b);
		if ((*stack_b)->data < (min + max) / 2)
			ft_rb(stack_b);
	}
	srt_three(stack_a);
	b_to_a(stack_a, stack_b);
	check_sort(stack_a);
}
