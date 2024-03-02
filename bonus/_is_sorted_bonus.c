/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _is_sorted_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 21:55:05 by alafdili          #+#    #+#             */
/*   Updated: 2024/03/02 10:13:37 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	_is_sorted_b(t_stack *stack_a)
{
	t_stack	*prev;
	t_stack	*cure;

	if (!stack_a)
		return (0);
	prev = stack_a;
	cure = prev->next;
	while (cure)
	{
		if (cure->data < prev->data)
		{
			return (0);
		}
		else
		{
			prev = cure;
			cure = cure->next;
		}
	}
	return (1);
}
