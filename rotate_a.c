/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 22:14:46 by alafdili          #+#    #+#             */
/*   Updated: 2024/02/23 21:02:49 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_ra(t_stack **head_a)
{
    t_stack *last;
    t_stack *first;
    
    first = *head_a;
    last = *head_a;
    if (*head_a && (*head_a) -> next)
    {
        while(last -> next)
            last = last -> next;
        *head_a = (*head_a) -> next;
        last -> next = first;
        first -> next = NULL;    
    }
    write(1, "ra\n", 3);
}