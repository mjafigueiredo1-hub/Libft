/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-alme <mde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 16:14:30 by mde-alme          #+#    #+#             */
/*   Updated: 2026/11/08 16:48:48 by mde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	bg;
	size_t	en;

	bg = 0;
	while (ft_strchr(set, s1[bg]))
		bg++;
	en = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[en]))
		en--;
	trim = ft_substr(s1, bg, en - bg + 1);
	return (trim);
}
