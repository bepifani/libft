/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepifani <bepifani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:37:34 by bepifani          #+#    #+#             */
/*   Updated: 2021/10/05 19:22:38 by bepifani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	while (len > 0)
	{
		if (*haystack == *needle)
		{
			if (*needle == '\0')
				return ((char *)haystack);
			needle++;
		}
		haystack++;
		len--;
	}
	return (0);
}
