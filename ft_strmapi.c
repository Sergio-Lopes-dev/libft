/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-pinh <sde-pinh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:06:27 by sde-pinh          #+#    #+#             */
/*   Updated: 2022/05/25 13:01:49 by sde-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	count;
	char			*new;

	count = 0;
	new = malloc ((ft_strlen(s)+ 1) * sizeof(char));
	if (!new)
		return (NULL);
	while (s[count] != '\0')
	{
		new[count] = (*f)(count, s[count]);
		count++;
	}
	new[count] = '\0';
	return (new);
}
