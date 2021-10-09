/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepifani <bepifani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:27:00 by bepifani          #+#    #+#             */
/*   Updated: 2021/10/09 19:04:55 by bepifani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t maxlen)
{
	size_t	i;
	size_t	len;

	if (src == NULL)
		return ((size_t) NULL);
	len = 0;
	i = 0;
	while (src[len])
		len++;
	if (maxlen < 1)
		return (len);
	while (src[i] && i < maxlen - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
