/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:47:17 by alafdili          #+#    #+#             */
/*   Updated: 2024/03/02 09:29:03 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stack **head_a)
{
	t_stack	*temp;

	temp = *head_a;
	if (*head_a && (*head_a)->next)
	{
		*head_a = (*head_a)->next;
		temp->next = (*head_a)->next;
		(*head_a)->next = temp;
	}
}

void	sb(t_stack **head_b)
{
	t_stack	*temp;

	temp = *head_b;
	if (*head_b && (*head_b)->next)
	{
		*head_b = (*head_b)->next;
		temp->next = (*head_b)->next;
		(*head_b)->next = temp;
	}
}

void	ft_ss(t_stack **head_a, t_stack **head_b)
{
	if (*head_a && *head_b)
	{
		sa(head_a);
		sb(head_b);
		write(1, "ss\n", 3);
	}
}
