/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_ins_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:41:21 by alafdili          #+#    #+#             */
/*   Updated: 2024/03/02 10:20:49 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	rest_ins(t_list *temp, t_stack **stack_a, t_stack **stack_b)
{
	if (!(ft_strcmp(temp -> content, "ra", 2)))
		ra(stack_a);
	else if (!(ft_strcmp(temp -> content, "rb", 2)))
		rb(stack_b);
	else if (!(ft_strcmp(temp -> content, "rra", 3)))
		rra(stack_a);
	else if (!(ft_strcmp(temp -> content, "rrb", 3)))
		rrb(stack_b);
	else if (!(ft_strcmp(temp -> content, "rrr", 3)))
		rrr(stack_a, stack_b);
	else if (!(ft_strcmp(temp -> content, "rr", 2)))
		rr(stack_a, stack_b);
}

void	apply_ins(t_list *head_list, t_stack **a, t_stack **b)
{
	t_list	*temp;

	temp = head_list;
	while (temp)
	{
		if (!(ft_strcmp(temp -> content, "pa", 2)))
			pa(a, b);
		else if (!(ft_strcmp(temp -> content, "pb", 2)))
			pb(a, b);
		else if (!(ft_strcmp(temp -> content, "sa", 2)))
			sa(a);
		else if (!(ft_strcmp(temp -> content, "sb", 2)))
			sb(b);
		else if (!(ft_strcmp(temp -> content, "ss", 2)))
			ss(a, b);
		else
			rest_ins(temp, a, b);
		temp = temp -> next;
	}
}
