/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _is_sorted.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 20:10:14 by alafdili          #+#    #+#             */
/*   Updated: 2024/03/01 21:45:15 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	_is_sorted(t_stack *stack_a)
{
	t_stack	*prev;
	t_stack	*cure;

	prev = stack_a;
	cure = prev -> next;
	while (cure)
	{
		if (cure -> data < prev -> data)
			return (0);
		else
		{
			prev = cure;
			cure = cure -> next;
		}
	}
	return (1);
}
