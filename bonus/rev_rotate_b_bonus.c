/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_b_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:04:41 by alafdili          #+#    #+#             */
/*   Updated: 2024/04/17 23:06:25 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	rrb(t_stack **head_b)
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
		prev->next = NULL;
		(*head_b)->next = first;
	}
}
