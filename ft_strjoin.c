/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-pinh <sde-pinh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 13:43:47 by sde-pinh          #+#    #+#             */
/*   Updated: 2022/06/06 12:33:59 by sde-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		count;
	char	*new;

	new = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!new)
		return (NULL);
	count = 0;
	while (*s1 != '\0')
	{
		new[count] = *s1;
		count++;
		s1++;
	}
	while (*s2 != '\0')
	{
		new[count] = *s2;
		count++;
		s2++;
	}
	new[count] = '\0';
	return (new);
}
