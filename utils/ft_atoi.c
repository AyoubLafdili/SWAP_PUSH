/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:10:40 by alafdili          #+#    #+#             */
/*   Updated: 2024/03/02 11:50:27 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	ft_atoi(const char *str, int *set)
{
	int		signe;
	long	result;

	signe = 1;
	result = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == 43 || *str == 45)
	{
		if (*str == 45)
			signe *= (-1);
		str++;
		break ;
	}
	while (*str >= 48 && *str <= 57)
	{
		result = result * 10 + *str - '0';
		if (!(result * signe >= -2147483648 && result * signe <= 2147483647))
			return (1);
		str++;
	}
	*set = result * signe;
	return (0);
}
