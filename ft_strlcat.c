/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-pinh <sde-pinh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:21:11 by sde-pinh          #+#    #+#             */
/*   Updated: 2022/05/31 16:35:48 by sde-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	dst_count;
	size_t	size;
	size_t	src_count;

	dst_count = ft_strlen(dst);
	src_count = ft_strlen(src);
	if (dstsize <= dst_count)
		return (src_count + dstsize);
	size = dst_count + src_count;
	while (*src != '\0' && dst_count < dstsize - 1)
	{
		dst[dst_count] = *src;
		dst_count++;
		src++;
	}
	dst[dst_count] = '\0';
	return (size);
}
