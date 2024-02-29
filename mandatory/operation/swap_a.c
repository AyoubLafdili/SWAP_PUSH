/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:42:33 by alafdili          #+#    #+#             */
/*   Updated: 2024/02/28 12:13:23 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_sa(t_stack **head_a)
{
    t_stack *temp;
    temp = *head_a;
    if (*head_a && (*head_a) -> next)
    {
        *head_a = (*head_a) -> next;
        temp -> next = (*head_a) -> next;
        (*head_a) -> next = temp;
        write(1, "sa\n", 3);
    }
}