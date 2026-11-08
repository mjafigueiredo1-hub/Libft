/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-alme <mde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 17:24:55 by mde-alme          #+#    #+#             */
/*   Updated: 2026/11/08 16:15:06 by mde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	s_l;

	s_l = ft_strlen(s);
	while (s_l >= 0)
	{
		if (*(s + s_l) == (char)c)
			return ((char *)(s + s_l));
		s_l--;
	}
	return (0);
}
