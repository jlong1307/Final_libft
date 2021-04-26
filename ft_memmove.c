/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 09:45:31 by jlong             #+#    #+#             */
/*   Updated: 2021/04/12 12:43:26 by jlong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*zdst;
	unsigned char	*zsrc;

	i = 0;
	zdst = (unsigned char *)dst;
	zsrc = (unsigned char *)src;
	if (zdst > zsrc)
	{
		while (i < n)
		{
			zdst[n - 1] = zsrc[n - 1];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			zdst[i] = zsrc[i];
			i++;
		}
	}
	return (dst);
}
