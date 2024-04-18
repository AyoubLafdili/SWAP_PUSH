/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:21:15 by alafdili          #+#    #+#             */
/*   Updated: 2024/04/18 15:23:56 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_right(char *chr)
{
	if (ft_isdigit(chr[0]))
	{
		if ((ft_isdigit(chr[1]) == 1) || chr[1] == 32 || chr[1] == '\0')
			return (0);
		else
			return (1);
	}
	else
	{
		if (ft_isdigit(chr[1]) == 1)
			return (0);
		else
			return (1);
	}
}

void	parsing(char *args)
{
	int	i;

	i = 0;
	if (args == NULL)
		exit (0);
	while (args[i])
	{
		if ((ft_isdigit(args[i]) == 1) || args[i] == '+' || args[i] == '-')
		{
			if (check_right(&args[i]) == 1)
				_free(&args, 'p');
			else
				i++;
		}
		else if (args[i] == 32)
			i++;
		else
			_free(&args, 'p');
	}
}
