/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 09:46:08 by jlong             #+#    #+#             */
/*   Updated: 2021/04/14 14:51:48 by jlong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sign(const char *str, int *sign, int i)
{
	if (str[i] == '-')
	{
		*sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	return (i);
}

static int	ft_isovermaxmin(int sign, unsigned long long r)
{
	if (sign == 1)
		return (-1);
	if (sign == -1 && r == 9223372036854775807)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	unsigned long long	max;
	unsigned long long	i;
	unsigned long long	r;
	int					s;

	i = 0;
	r = 0;
	s = 1;
	max = LONG_MAX / 10;
	if (str[0] == '\0')
		return (0);
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	i = ft_sign(str, &s, i);
	while (ft_isdigit(str[i]))
	{
		r = r * 10 + str[i] - 48;
		if (r > max)
			return (ft_isovermaxmin(s, r));
		i++;
	}
	return ((int)(s * r));
}
