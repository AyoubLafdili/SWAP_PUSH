/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:10:08 by alafdili          #+#    #+#             */
/*   Updated: 2024/04/18 19:11:50 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pb(t_stack **head_a, t_stack **head_b)
{
	t_stack	*tmp;

	tmp = *head_a;
	if (*head_a)
	{
		*head_a = (*head_a)->next;
		tmp -> next = *head_b;
		*head_b = tmp;
		write(1, "pb\n", 3);
	}
}
