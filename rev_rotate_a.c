/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 19:03:26 by alafdili          #+#    #+#             */
/*   Updated: 2024/02/26 16:07:02 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_rra(t_stack **head_a)
{

    t_stack *first;
    t_stack *prev;

    first = *head_a;
    prev = NULL;
    if (*head_a && (*head_a) -> next)
    {
        while((*head_a) -> next)
        {
            prev = *head_a;
            *head_a = (*head_a) -> next;
        }
        prev -> next = NULL;
        (*head_a) -> next = first;    
        write(1, "rra\n", 4);
    }
}