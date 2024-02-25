/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_cost.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:26:09 by alafdili          #+#    #+#             */
/*   Updated: 2024/02/23 22:16:01 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int get_move(t_stack *head, int content)
{
    int size;
    int pos;
    
    pos = 0;
    size = list_size(head);
    while (head && head -> data != content)
    {
        head = head -> next;
        pos++;
    }
    if (pos <= size - pos)
        return (pos);
    else
        return (size - pos);
}

t_stack *get_cost(t_stack *stack_a, t_stack *stack_b)
{
    t_stack *head_a;
    int min_cost;
    int temp;
    t_stack *lowest;
    
    head_a = stack_a;
    lowest = head_a;
    min_cost = get_move(stack_a, head_a -> data)
    + get_move(stack_b, head_a -> target -> data);
    while (head_a)
    {
        temp = get_move(stack_a, head_a -> data) 
        + get_move(stack_b, head_a -> target -> data);
        if (temp < min_cost)
        {
            min_cost = temp;
            lowest = head_a;
            head_a = head_a -> next;
        }
        else
        head_a = head_a -> next;
    }
    return (lowest);
}
