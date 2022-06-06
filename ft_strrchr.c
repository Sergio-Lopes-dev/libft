/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-pinh <sde-pinh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 12:03:11 by sde-pinh          #+#    #+#             */
/*   Updated: 2022/05/31 16:37:26 by sde-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*pointer;
	char	*last;

	last = NULL;
	pointer = (char *) s;
	while (*pointer != '\0')
	{
		if (*pointer == (char)c)
			last = pointer;
		pointer++;
	}
	if (*pointer == (char)c)
		return (pointer);
	return (last);
}
