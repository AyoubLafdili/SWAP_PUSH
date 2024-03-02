/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_clear_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:01:00 by alafdili          #+#    #+#             */
/*   Updated: 2024/03/02 11:44:09 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	free_list(t_list *to_free)
{
	t_list	*temp;

	if (!to_free)
		return ;
	while (to_free)
	{
		temp = to_free;
		to_free = to_free->next;
		free(temp -> content);
		free(temp);
	}
}

void	free_stack(t_stack *lst)
{
	t_stack	*temp;

	if (!lst)
		return ;
	while (lst)
	{
		temp = lst;
		lst = lst->next;
		free(temp);
	}
}

void	list_clear(t_stack *lst, t_list *head_list, int flag)
{
	if (flag == 1)
	{
		free_list(head_list);
		return ;
	}
	else
		free_stack(lst);
}
