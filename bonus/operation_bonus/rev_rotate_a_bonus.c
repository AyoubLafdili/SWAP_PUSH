/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_a_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:27:05 by alafdili          #+#    #+#             */
/*   Updated: 2024/03/02 10:03:03 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	rra(t_stack **head_a)
{
	t_stack	*first;
	t_stack	*prev;

	first = *head_a;
	prev = NULL;
	if (*head_a && (*head_a)->next)
	{
		while ((*head_a)->next)
		{
			prev = *head_a;
			*head_a = (*head_a)->next;
		}
		prev->next = NULL;
		(*head_a)->next = first;
	}
}
