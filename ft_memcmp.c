/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-pinh <sde-pinh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:53:55 by sde-pinh          #+#    #+#             */
/*   Updated: 2022/05/24 16:32:32 by sde-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			count;
	unsigned char	*i_s1;
	unsigned char	*i_s2;

	i_s1 = (unsigned char *) s1;
	i_s2 = (unsigned char *) s2;
	count = 0;
	while (count < n)
	{
		if (i_s1[count] != i_s2[count])
			return (i_s1[count] - i_s2[count]);
		count++;
	}
	return (0);
}
