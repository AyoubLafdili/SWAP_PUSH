/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:59:58 by alafdili          #+#    #+#             */
/*   Updated: 2024/04/18 23:36:42 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_stack **head_a, t_stack **head_b)
{
	t_stack	*tmp;

	tmp = *head_b;
	if (*head_b)
	{
		*head_b = (*head_b)->next;
		tmp -> next = *head_a;
		*head_a = tmp;
	}
	write(1, "pa\n", 3);
}
