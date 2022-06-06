/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-pinh <sde-pinh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 19:02:12 by sde-pinh          #+#    #+#             */
/*   Updated: 2022/05/25 12:19:19 by sde-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		count;
	char	*s2;

	count = 0;
	while (s1[count] != '\0')
		count++;
	s2 = malloc(count + 1);
	if (!s2)
		return (NULL);
	count = 0;
	while (s1[count] != '\0')
	{
		s2[count] = s1[count];
		count++;
	}
	s2[count] = '\0';
	return (s2);
}
