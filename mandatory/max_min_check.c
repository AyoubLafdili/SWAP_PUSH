/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_min_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 00:49:51 by alafdili          #+#    #+#             */
/*   Updated: 2024/04/19 00:49:53 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_invoke(char *args, char **mtx, int flag)
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

void	max_min(char *inputs, t_stack **head)
{
	char	**args;
	int		i;
	int		tmp;

	i = 0;
	tmp = 0;
	args = ft_split(inputs, ' ');
	if (args == NULL)
		_free(&inputs, 'p');
	while (args[i])
	{
		if (atoi_check(args[i], &tmp) == 0)
		{
			*head = add_to_stack(*head, tmp);
			if (*head == NULL)
				free_invoke(inputs, args, 1);
			i++;
		}
		else
		{
			list_clear(head);
			free_invoke(inputs, args, 1);
		}
	}
	free_invoke(inputs, args, 0);
}
