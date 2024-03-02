/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_size.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:52:36 by alafdili          #+#    #+#             */
/*   Updated: 2024/03/01 22:07:27 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	list_size(t_stack *list)
{
	int		counter;
	t_stack	*temp;

	temp = list;
	counter = 0;
	while (temp != NULL)
	{
		counter++;
		temp = temp -> next;
	}
	return (counter);
}
