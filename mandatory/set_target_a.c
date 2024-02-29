/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_target_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:47:45 by alafdili          #+#    #+#             */
/*   Updated: 2024/02/21 14:41:53 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack *max_target(t_stack *head_b)
{
    t_stack *max_node;
    max_node = head_b;
    max_node -> data = head_b -> data;
    while (head_b != NULL)
    {
        if (head_b -> data > max_node -> data)
            max_node = head_b;
        head_b = head_b -> next;
    }
    return (max_node);
}

void set_target_a(t_stack *head_a, t_stack *head_b)
{
    t_stack *b_cp;
    t_stack *a_cp;
    a_cp = head_a;
    while (a_cp != NULL && list_size(head_a) > 3)
    {
        b_cp = head_b;
        a_cp -> target = NULL;
        while (b_cp != NULL)
        {
            if (a_cp -> target == NULL && b_cp -> data < a_cp -> data)
            {
                a_cp -> target = b_cp;
                b_cp = b_cp -> next;
            }
            else if(a_cp -> target != NULL && 
            (b_cp -> data < a_cp -> data && b_cp -> data > a_cp -> target -> data))
            {
                a_cp -> target = b_cp;
                b_cp = b_cp -> next;
            }
            else
            b_cp = b_cp -> next;
        }
        if (a_cp -> target == NULL)
            a_cp -> target = max_target(head_b);
        a_cp =  a_cp -> next;
    }
}
