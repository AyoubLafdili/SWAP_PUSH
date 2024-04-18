/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:08:11 by alafdili          #+#    #+#             */
/*   Updated: 2024/04/09 02:59:35 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	counter;

	counter = 0;
	while (counter <= ft_strlen(s))
	{
		if (s[counter] == (char)c)
		{
			return ((char *)&s[counter]);
		}
		counter++;
	}
	return (NULL);
}
