/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-pinh <sde-pinh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 12:22:29 by sde-pinh          #+#    #+#             */
/*   Updated: 2022/05/31 16:45:51 by sde-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			count;
	unsigned char	*i_s1;
	unsigned char	*i_s2;

	i_s1 = (unsigned char *)s1;
	i_s2 = (unsigned char *)s2;
	count = 0;
	if (!n)
		return (0);
	while (i_s1[count] == i_s2[count] && i_s1[count]
		&& i_s2[count] && count < n - 1)
		count++;
	return (i_s1[count] - i_s2[count]);
}
