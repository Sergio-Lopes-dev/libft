/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-pinh <sde-pinh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 17:27:44 by sde-pinh          #+#    #+#             */
/*   Updated: 2022/05/31 16:39:07 by sde-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	check(const char *haystack, const char *needle, size_t len)
{
	while (*needle != '\0')
	{
		if (*needle != *haystack || len <= 0)
			return (0);
		needle++;
		haystack++;
		len--;
	}
	return (1);
}	

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*pointer;

	if (!ft_strlen(needle))
		return ((char *)haystack);
	while (*haystack != '\0' && len > 0)
	{
		if (check(haystack, needle, len))
		{
			pointer = (char *) haystack;
			return (pointer);
		}
		haystack++;
		len--;
	}
	return (NULL);
}
