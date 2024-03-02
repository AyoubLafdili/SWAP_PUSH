/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 16:07:27 by alafdili          #+#    #+#             */
/*   Updated: 2024/03/01 22:52:28 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	srt_three(t_stack **head_a)
{
	t_stack	*last;
	int		min;
	int		max;

	get_max_min(*head_a, &min, &max);
	last = ((*head_a)->next)->next;
	if ((*head_a)->data == min && last->data != max)
	{
		ft_rra(head_a);
		ft_sa(head_a);
	}
	else if ((*head_a)->data == max && last->data == min)
	{
		ft_ra(head_a);
		ft_sa(head_a);
	}
	else if ((*head_a)->data == max && last->data != min)
		ft_ra(head_a);
	else if (((*head_a)->data != max && (*head_a)->data != min)
		&& last->data == max)
		ft_sa(head_a);
	else
		ft_rra(head_a);
}
