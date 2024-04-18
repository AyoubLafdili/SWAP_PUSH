/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_free.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:27:52 by alafdili          #+#    #+#             */
/*   Updated: 2024/04/18 14:40:36 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_matrix(char **mtx)
{
	int	i;

	i = 0;
	while (mtx[i])
	{
		free(mtx[i]);
		i++;
	}
	free(mtx);
}

void	_free(char **mtx, char flag)
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
