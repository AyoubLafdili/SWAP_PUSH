/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 22:30:56 by alafdili          #+#    #+#             */
/*   Updated: 2024/04/17 19:29:20 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rb(t_stack **head_b)
{
	t_stack	*last;
	t_stack	*first;

	last = *head_b;
	first = *head_b;
	if (*head_b && (*head_b)->next)
	{
		while (last->next)
			last = last->next;
		*head_b = (*head_b)->next;
		last->next = first;
		first->next = NULL;
		write(1, "rb\n", 3);
	}
}
