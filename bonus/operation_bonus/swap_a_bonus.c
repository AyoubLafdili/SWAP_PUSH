/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:30:53 by alafdili          #+#    #+#             */
/*   Updated: 2024/02/28 13:00:25 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void sa(t_stack **head_a)
{
    t_stack *temp;
    temp = *head_a;
    if (*head_a && (*head_a) -> next)
    {
        *head_a = (*head_a) -> next;
        temp -> next = (*head_a) -> next;
        (*head_a) -> next = temp;
    }
}