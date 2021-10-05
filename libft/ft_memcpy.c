/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepifani <bepifani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:52:34 by bepifani          #+#    #+#             */
/*   Updated: 2021/10/05 15:06:09 by bepifani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	char		*a;
	const char	*b;

	*a = dest;
	*b = src;
	while (len > 0)
	{
		a = b;
		a++;
		b++;
		len--;
	}
	return (dest);
}
