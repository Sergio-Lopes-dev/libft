/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-pinh <sde-pinh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 13:56:50 by sde-pinh          #+#    #+#             */
/*   Updated: 2022/05/31 16:49:15 by sde-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	run(char s1, char const *set)
{
	while (*set != '\0')
	{
		if (*set == s1)
			return (0);
		set++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int		start;
	int		end;
	int		counter;

	start = -1;
	end = 0;
	counter = 0;
	while (s1[counter] != '\0')
	{
		if (run(s1[counter], set))
		{
			if (start == -1)
				start = counter;
			else
				end = counter;
		}
		counter++;
	}
	new = ft_substr(s1, start, (end - start) + 1);
	if (!new)
		return (NULL);
	return (new);
}
