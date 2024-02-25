/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:52:27 by alafdili          #+#    #+#             */
/*   Updated: 2024/02/10 18:18:47 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void	ft_lstclear(t_stack **lst)
{
	t_stack	*temp;

	if (!lst)
		return ;
	while (*lst)
	{
		temp = *lst;
		*lst = (*lst)->next;
		free(temp);
	}
}