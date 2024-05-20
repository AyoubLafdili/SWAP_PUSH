/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_check_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 22:50:51 by alafdili          #+#    #+#             */
/*   Updated: 2024/04/19 12:58:49 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	atoi_check(const char *str, int *set)
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
