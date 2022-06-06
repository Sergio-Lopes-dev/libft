/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-pinh <sde-pinh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 16:57:41 by sde-pinh          #+#    #+#             */
/*   Updated: 2022/06/01 14:43:46 by sde-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	count;
	char	*pointer;

	pointer = (char *)s;
	count = 0;
	while (n > 0)
	{
		pointer[count] = '\0';
		count++;
		n--;
	}
}
