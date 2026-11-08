/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-alme <mde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 19:09:38 by mde-alme          #+#    #+#             */
/*   Updated: 2026/11/08 12:40:40 by mde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_l;
	size_t	j;

	if (*little == 0)
		return ((char *)big);
	i = 0;
	little_l = ft_strlen(little);
	while (big[i] && (i + little_l) <= len)
	{
		j = 0;
		while (little[j] && big[i + j] == little[j])
		{
			j++;
		}
		if (little[j] == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (0);
}
