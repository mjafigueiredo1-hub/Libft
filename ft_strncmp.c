/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-alme <mde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 18:11:58 by mde-alme          #+#    #+#             */
/*   Updated: 2026/11/07 22:04:09 by mde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	c;

	c = 0;
	while ((s1[c] || s2[c]) && (c < n))
	{
		if (((unsigned char)s1[c] - (unsigned char)s2[c]) != 0)
		{
			return ((unsigned char)s1[c] - (unsigned char)s2[c]);
		}
		c++;
	}
	return (0);
}
