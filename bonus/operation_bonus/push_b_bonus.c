/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:26:05 by alafdili          #+#    #+#             */
/*   Updated: 2024/03/02 10:01:49 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	pb(t_stack **head_a, t_stack **head_b)
{
	t_stack	*temp;

	temp = *head_a;
	if (*head_a)
	{
		*head_b = crt_add_front(*head_b, (*head_a)->data);
		*head_a = (*head_a)->next;
		free(temp);
	}
}
