/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:59:58 by alafdili          #+#    #+#             */
/*   Updated: 2024/02/26 15:41:42 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_pa(t_stack **head_a, t_stack **head_b)
{
    t_stack *to_free;
    to_free = *head_b;
    if (*head_b)
    {
        *head_a = crt_add_front(*head_a, (*head_b) -> data);
        *head_b = (*head_b) -> next;
        free(to_free);    
        write(1, "pa\n", 3);
    }
}