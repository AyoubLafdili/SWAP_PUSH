/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:17:57 by alafdili          #+#    #+#             */
/*   Updated: 2024/04/17 19:29:20 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rrb(t_stack **head_b)
{
	t_stack	*first;
	t_stack	*prev;

	prev = NULL;
	first = *head_b;
	if (*head_b && (*head_b)->next)
	{
		while ((*head_b)->next)
		{
			prev = *head_b;
			*head_b = (*head_b)->next;
		}
		prev -> next = NULL;
		(*head_b)->next = first;
		write(1, "rrb\n", 4);
	}
}
