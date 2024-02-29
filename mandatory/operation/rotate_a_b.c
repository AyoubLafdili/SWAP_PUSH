/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 22:38:42 by alafdili          #+#    #+#             */
/*   Updated: 2024/02/27 22:55:17 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ra(t_stack **head_a)
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
}
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

void ft_rr(t_stack **head_a, t_stack **head_b)
{
    if (*head_a && *head_b)
    {
        ra(head_a);
        rb(head_b);
        write(1, "rr\n", 3);
    }
}
