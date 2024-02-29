/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:08:59 by alafdili          #+#    #+#             */
/*   Updated: 2024/02/28 12:19:49 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void rb(t_stack **head_b)
{
    t_stack *last;
    t_stack *first;

    last = *head_b;
    first = *head_b;
    if (*head_b && (*head_b) -> next)
    {
        while (last -> next)
            last = last -> next;
        *head_b = (*head_b) -> next;
        last -> next = first;
        first -> next = NULL;
    }
}