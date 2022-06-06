/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-pinh <sde-pinh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:41:16 by sde-pinh          #+#    #+#             */
/*   Updated: 2022/05/31 16:26:44 by sde-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*total;

	if (!count || !size)
	{
		count = 1;
		size = 1;
	}
	total = malloc(count * size);
	if (!total)
		return (NULL);
	ft_bzero(total, count * size);
	return ((void *)total);
}
