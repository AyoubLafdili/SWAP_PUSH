/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _free_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:32:37 by alafdili          #+#    #+#             */
/*   Updated: 2024/02/28 12:32:52 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void free_matrix(char **mtx)
{
    int i;

    i = 0;
    while (mtx[i])
    {
        free(mtx[i]);
        i++;
    }
    free(mtx);
}

void _free(char **mtx, char flag)
{
    if (flag == 'm')
    {
        free_matrix(mtx);
        write(2, "Error\n", 6);
        exit(1);
    }
    else if (flag == 'p')
    {
        free(*mtx);
        write(2, "Error\n", 6);
        exit(1);
    }
    else if (flag == 'f')
        free_matrix(mtx);
    else
    {
        write(2, "Error\n", 6);
        exit(1);
    }
}