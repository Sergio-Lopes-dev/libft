/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-pinh <sde-pinh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 16:22:28 by sde-pinh          #+#    #+#             */
/*   Updated: 2022/05/25 13:11:41 by sde-pinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	run(long int n)
{
	int	signal;
	int	counter;

	signal = 1;
	counter = 1;
	if (n < 0)
	{
		n = n * -1;
		counter++;
	}
	while (n > 9)
	{
		counter++;
		n = n / 10;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	int			signal;
	char		*str;
	int			max;
	long int	value;

	signal = 0;
	value = (long int)n;
	max = run(value);
	str = malloc(sizeof(char) * (max + 1));
	if (!str)
		return (NULL);
	if (value < 0)
	{
		value = value * -1;
		str[0] = '-';
		signal = 1;
	}
	str[max--] = '\0';
	while (max >= signal)
	{
		str[max] = (value % 10) + '0';
		value = value / 10;
		max--;
	}
	return (str);
}
