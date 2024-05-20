/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_min_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:03:58 by alafdili          #+#    #+#             */
/*   Updated: 2024/04/19 12:58:49 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
			list_clear(*head, NULL, 0);
			free_invoke(inputs, args, 1);
		}
	}
	free_invoke(inputs, args, 0);
}
