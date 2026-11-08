/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-alme <mde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 11:18:27 by mde-alme          #+#    #+#             */
/*   Updated: 2026/11/08 14:55:40 by mde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		s_l;
	char	*dup;
	int		c;

	s_l = ft_strlen(s);
	dup = (char *)malloc((s_l + 1) * sizeof(const char));
	if (!dup)
		return (NULL);
	c = 0;
	while (s[c])
	{
		dup[c] = s[c];
		c++;
	}
	dup[c] = 0;
	return (dup);
}
