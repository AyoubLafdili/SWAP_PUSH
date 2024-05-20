/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:29:12 by alafdili          #+#    #+#             */
/*   Updated: 2024/04/19 12:58:49 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ra(t_stack **head_a)
{
	t_stack	*last;
	t_stack	*first;

	first = *head_a;
	last = *head_a;
	if (*head_a && (*head_a)->next)
	{
		while (last->next)
			last = last->next;
		*head_a = (*head_a)->next;
		last->next = first;
		first->next = NULL;
	}
}
