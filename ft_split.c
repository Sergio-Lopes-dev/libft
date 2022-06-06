/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-pinh <sde-pinh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 18:18:53 by sde-pinh          #+#    #+#             */
/*   Updated: 2022/06/06 14:04:19 by sde-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	max_div(char const *s, char c)
{
	int	max;
	int	count;

	max = 0;
	count = 0;
	while (s[count] != '\0')
	{
		if (s[count] == c && (count != 0 || s[count - 1] != c))
			max++;
		count++;
	}
	return (max + 1);
}

static void	free_array(char **new, int div)
{
	while (div >= 0)
	{
		free(new[div]);
		div--;
	}
	free(new);
}

static int	new_string(char const *s, char c, char **new, int div)
{
	int	size;

	size = 0;
	while (s[size] != c && s[size] != '\0')
		size++;
	new[div] = ft_substr(s, 0, size);
	if (!new[div])
	{
		free_array(new, div);
		return (-1);
	}
	return (size + 1);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	int		count;
	int		div;
	int		maximus;

	maximus = max_div(s, c);
	new = malloc((maximus + 1) * sizeof(char *));
	if (!new)
		return (NULL);
	div = 0;
	while (div < maximus && *s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			count = new_string(s, c, new, div);
			if (count == -1)
				return (NULL);
				div++;
		s += count;
		}
	}
	new[div] = NULL;
	return (new);
}
