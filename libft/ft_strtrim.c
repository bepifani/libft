/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepifani <bepifani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 13:56:19 by bepifani          #+#    #+#             */
/*   Updated: 2021/10/10 15:28:49 by bepifani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;
	int		a;

	i = 0;
	j = 0;
	a = 0;
	if (ft_strlen(s1) > 3 * ft_strlen(set))
		str = (char *)malloc(sizeof(char) * (ft_strlen(s1) - 3 * ft_strlen(set)));
	else
		str = (char *)malloc(sizeof(char) * ft_strlen(s1));
	if (!str)
		return (NULL);
	while (set[j] == ' ')
		j++;
	while (s1[a])
	{
		while (s1[a] == set[j] || s1[a] == ' ' || s1[a] == '\n'
			|| s1[a] == '\v' || s1[a] == '\t' || s1[a] == '\f' || s1[a] == '\r')
			a++;
		str[i] = s1[a];
		i++;
		a++;
	}
	str[i] = '\0';
	return (str);
}
