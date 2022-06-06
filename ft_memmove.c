/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-pinh <sde-pinh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 12:45:52 by sde-pinh          #+#    #+#             */
/*   Updated: 2022/05/31 16:30:56 by sde-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*p_dst;
	char	*p_src;
	size_t	count;

	p_dst = (char *)dst;
	p_src = (char *)src;
	if (!p_dst && !p_src)
		return (NULL);
	if (p_dst < p_src)
		return (ft_memcpy(dst, src, len));
	else
	{
		count = len - 1;
		while (len > 0)
		{
			p_dst[count] = p_src[count];
			count--;
			len--;
		}
	}
	return ((void *)p_dst);
}
