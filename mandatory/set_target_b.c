/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_target_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:00:44 by alafdili          #+#    #+#             */
/*   Updated: 2024/02/20 22:34:53 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack *min_target(t_stack *head_a)
{
    t_stack *min_node;
    min_node = head_a;
    min_node -> data = head_a -> data;
    while (head_a != NULL)
    {
        if (head_a -> data < min_node -> data)
            min_node = head_a;
        head_a = head_a -> next;
    }
    return (min_node);
}

void set_target_b(t_stack *head_a, t_stack *head_b)
{
    t_stack *b_cp;
    t_stack *a_cp;
    b_cp = head_b;
    if (!head_a)
        return ;
    while (b_cp != NULL)
    {
        a_cp = head_a;
        b_cp -> target = NULL;
        while (a_cp != NULL)
        {
            if (b_cp -> target == NULL && a_cp -> data > b_cp -> data)
            {
                b_cp -> target = a_cp;
                a_cp = a_cp -> next;
            }
            else if(b_cp -> target != NULL && 
            (a_cp -> data > b_cp -> data && a_cp -> data < b_cp -> target -> data))
            {
                b_cp -> target = a_cp;
                a_cp = a_cp -> next;
            }
            else
            a_cp = a_cp -> next;
        }
        if (b_cp -> target == NULL)
            b_cp -> target = min_target(head_a);
        b_cp =  b_cp -> next;
    }
}