/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_ab_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:31:41 by alafdili          #+#    #+#             */
/*   Updated: 2024/04/19 12:58:49 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ss(t_stack **head_a, t_stack **head_b)
{
	if (*head_a && *head_b)
	{
		sa(head_a);
		sb(head_b);
	}
}
