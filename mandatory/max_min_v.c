/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_min_v.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 11:12:52 by alafdili          #+#    #+#             */
/*   Updated: 2024/02/25 11:16:41 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void get_max_min(t_stack *head_a, int *min_num, int *max_num)
{
    *min_num = head_a -> data;
    *max_num = head_a -> data;
    while (head_a != NULL)
    {
        if (head_a -> data < *min_num)
            *min_num = head_a -> data;
        if (head_a -> data > *max_num)
            *max_num = head_a -> data;
        head_a = head_a -> next;
    }
}