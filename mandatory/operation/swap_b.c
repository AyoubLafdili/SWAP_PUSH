/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:37:51 by alafdili          #+#    #+#             */
/*   Updated: 2024/03/02 09:30:38 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sb(t_stack **head_b)
{
	t_stack	*temp;

	temp = *head_b;
	if (*head_b && (*head_b)->next)
	{
		*head_b = (*head_b)->next;
		temp->next = (*head_b)->next;
		(*head_b)->next = temp;
		write(1, "sb\n", 3);
	}
}
