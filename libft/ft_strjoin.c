/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:29:43 by alafdili          #+#    #+#             */
/*   Updated: 2024/04/18 19:26:43 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*constr;
	int		flen;
	int		slen;

	if (s1 == NULL)
	{
		constr = ft_strdup(s2);
		if (!constr)
			return (NULL);
		return (constr);
	}
	flen = ft_strlen(s1);
	slen = ft_strlen(s2);
	constr = (char *) malloc((flen + slen + 1) * sizeof(char));
	if (constr == NULL)
		return (free((void *)s1), NULL);
	ft_strlcpy (constr, s1, flen + 1);
	ft_strlcat (constr, s2, (flen + slen + 1));
	free((void *)s1);
	return (constr);
}
