/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:10:56 by alafdili          #+#    #+#             */
/*   Updated: 2024/04/18 19:17:11 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	pa(t_stack **head_a, t_stack **head_b)
{
	t_stack	*tmp;

	tmp = *head_b;
	if (*head_b)
	{
		*head_b = (*head_b)->next;
		tmp -> next = *head_a;
		*head_a = tmp;
	}
}
