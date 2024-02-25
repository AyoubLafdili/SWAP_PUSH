/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_min.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 14:47:08 by alafdili          #+#    #+#             */
/*   Updated: 2024/02/25 23:32:38 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void free_call(char *args, char **mtx, int flag)
{
    if (flag == 1)
    {
        free(args);
        _free(mtx, 'm'); 
    }
    else
    {
        free(args);
        _free(mtx, 'f');
    }
}

void max_min(char *args, t_stack **head)
{
    int i;
    int temp;
    char **nbs;
    
    i = 0;
    temp = 0;
    nbs = ft_split(args, ' ');
    if (nbs == NULL)
        _free(&args, 'p');
    while(nbs[i])
    {
        if (ft_atoi(nbs[i], &temp) == 0)
        {
            *head = add_to_stack(*head,temp);
            if (*head == NULL)
                free_call(args, nbs, 1);
            i++;
        }
        else
        {
            ft_lstclear(head);
            _free(nbs, 'f');
            _free(&args, 'p');
        }
    }
    free_call(args, nbs, 0);
}
