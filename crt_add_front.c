/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   crt_add_front.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:47:55 by alafdili          #+#    #+#             */
/*   Updated: 2024/02/26 15:35:35 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *crt_add_front(t_stack *head, int data)
{
    t_stack *new_elem;

    new_elem = malloc(sizeof(t_stack));
    if (!new_elem)
        return NULL;
    new_elem -> data = data;
    new_elem -> next = head;
    head = new_elem;
    return(head);
}