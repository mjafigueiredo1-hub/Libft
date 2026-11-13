/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-alme <mde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 09:33:58 by mde-alme          #+#    #+#             */
/*   Updated: 2026/11/10 18:16:53 by mde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_count_strs(char const *s, char c)
{
    int count;
    int in_word;

    count = 0;
    in_word = 0;
    while (*s)
    {
        if (*s != c && in_word == 0)
        {
            in_word = 1;
            count++;
        }
        else if (*s == c)
            in_word = 0;
        s++;
    }
    return (count);
}
int ft_allocate_str(char const *s, char c, char **arr, int *i)
{
    int j;
    char *dest;

    j = 0;

    while (s[*i + j] != c && s[*i + j])
        j++;
    dest = (char *)malloc((j + 1) * sizeof(char));
    if (!dest)
        return (0);
    ft_strlcpy(dest, &s[*i], j + 1);
    *arr = dest;
    *i += j;
    return (1);
}
char	**ft_free_so_far(char **arr, int r)
{
	while (r > 0)
	{
		r--;
		free(arr[r]);
	}
	free(arr);
    return (NULL);
}

char **ft_split(char const *s, char c)
{
    int i;
    int r;
    char **arr;

    if (!s)
		return (NULL);
    arr = (char **)malloc((ft_count_strs(s, c) + 1) * sizeof(char*));
    if (!arr)
        return (NULL);
    i = 0;
    r = 0;
    while(s[i])
    {
        if (s[i] != c)
        {
            if (!ft_allocate_str(s, c, &arr[r], &i))
                return(ft_free_so_far(arr, r));
            r++;
        }
        else
            i++;
    }
    arr[r] = NULL;
    return (arr);
}