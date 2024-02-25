/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_a_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 21:59:18 by alafdili          #+#    #+#             */
/*   Updated: 2024/02/22 15:27:19 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void ft_rrat(t_stack **head_a)
{

    t_stack *first;
    t_stack *prev;

    first = *head_a;
    prev = NULL;
    if (*head_a)
    {
        while((*head_a) -> next)
        {
            prev = *head_a;
            *head_a = (*head_a) -> next;
        }
        prev -> next = NULL;
        (*head_a) -> next = first;    
    }
}

static void ft_rrbt(t_stack **head_b)
{
    t_stack *first;
    t_stack *prev;

    prev = NULL;
    first = *head_b;
    if (*head_b)
    {
        
        while ((*head_b) -> next)
        {
            prev = *head_b;
            *head_b = (*head_b) -> next;
        }
        prev -> next = NULL;
        (*head_b) -> next = first;       
    }
}

void ft_rrr(t_stack **head_a, t_stack **head_b)
{
    if (*head_a && *head_b)
    {
        ft_rrat(head_a);
        ft_rrbt(head_b);
    }
    write(1, "rrr\n", 4);
}