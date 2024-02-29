/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:10:08 by alafdili          #+#    #+#             */
/*   Updated: 2024/02/27 22:55:17 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_pb(t_stack **head_a, t_stack **head_b)
{
    t_stack *temp;
    temp = *head_a;
    if (*head_a)
    {   
        *head_b = crt_add_front(*head_b, (*head_a) -> data);
        *head_a = (*head_a) -> next;
        free(temp);
        write(1, "pb\n", 3);
    }
}