/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duplicate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:25:56 by alafdili          #+#    #+#             */
/*   Updated: 2024/02/25 23:33:06 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int search(int data, t_stack *to_search)
{
    
    while(to_search)
    {
        if (to_search -> data == data)
            return 1;
        else
        to_search = to_search -> next;
    }
    return 0;
}
void check_duplicat(t_stack **list)
{
    t_stack *temp;

    temp = *list;
    while (temp)
    {
        if (search(temp -> data, temp -> next) == 1)
        {
            ft_lstclear(list);
            write(2, "Error\n", 7);
            exit(1);
        }
        else
            temp = temp -> next;
    }
}