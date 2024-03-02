/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:10:56 by alafdili          #+#    #+#             */
/*   Updated: 2024/03/02 10:00:45 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	pa(t_stack **head_a, t_stack **head_b)
{
	t_stack	*to_free;

	to_free = *head_b;
	if (*head_b)
	{
		*head_a = crt_add_front(*head_a, (*head_b)->data);
		*head_b = (*head_b)->next;
		free(to_free);
	}
}
