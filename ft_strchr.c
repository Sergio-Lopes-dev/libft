/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-pinh <sde-pinh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 12:02:24 by sde-pinh          #+#    #+#             */
/*   Updated: 2022/05/24 14:55:44 by sde-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*pointer;

	pointer = (char *) s;
	while (*pointer != '\0')
	{
		if (*pointer == (char)c)
			return (pointer);
		pointer++;
	}
	if (*pointer == (char)c)
		return (pointer);
	return (NULL);
}
