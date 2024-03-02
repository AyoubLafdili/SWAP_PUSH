/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_ab_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:30:04 by alafdili          #+#    #+#             */
/*   Updated: 2024/03/02 10:05:18 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	rr(t_stack **head_a, t_stack **head_b)
{
	if (*head_a && *head_b)
	{
		ra(head_a);
		rb(head_b);
	}
}
