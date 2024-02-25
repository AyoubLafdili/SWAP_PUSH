/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:14:07 by alafdili          #+#    #+#             */
/*   Updated: 2024/02/08 12:04:56 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*ns1;
	unsigned char	*ns2;
	if (!s1 || !s2)
	return (1);
	ns1 = (unsigned char *)s1;
	ns2 = (unsigned char *)s2;
	while (*ns1 || *ns2)
	{
		if (*ns1 != *ns2)
			return (1);
		ns1++;
		ns2++;
	}
	return (0);
}

