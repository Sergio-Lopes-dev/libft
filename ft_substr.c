/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-pinh <sde-pinh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 12:42:59 by sde-pinh          #+#    #+#             */
/*   Updated: 2022/05/31 16:47:00 by sde-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	count;
	char	*t;

	count = ft_strlen(s);
	if (start >= count)
		len = 0;
	if (count > len)
		t = malloc((len + 1) * sizeof(char));
	else
		t = malloc((count + 1) * sizeof(char));
	if (!t)
		return (NULL);
	count = 0;
	while (count < len && s[start] != '\0')
	{
		t[count] = s[start];
		count++;
		start++;
	}
	t[count] = '\0';
	return (t);
}
