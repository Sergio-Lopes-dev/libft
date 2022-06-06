/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-pinh <sde-pinh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:11:38 by sde-pinh          #+#    #+#             */
/*   Updated: 2022/06/01 15:32:29 by sde-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	count;
	char	*i_dst;
	char	*i_src;

	i_dst = (char *) dst;
	i_src = (char *) src;
	count = 0;
	if (!i_dst && !i_src)
		return (NULL);
	while (count < n)
	{		
		i_dst[count] = i_src[count];
		count++;
	}
	return ((void *)i_dst);
}
