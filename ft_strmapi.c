/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-alme <mde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 17:19:36 by mde-alme          #+#    #+#             */
/*   Updated: 2026/11/11 18:20:44 by mde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *new_s;
    size_t s_l;
    unsigned int i;

    if (!s || !f)
		return (NULL);
    s_l = ft_strlen(s);
    new_s = (char *)malloc((s_l + 1) * sizeof(char));
    if(!new_s)
        return (NULL);
    i = 0;
    while (i < s_l)
    {
        new_s[i] = f(i, s[i]);
        i++;
    }
    new_s[i] = 0;
    return (new_s);
}