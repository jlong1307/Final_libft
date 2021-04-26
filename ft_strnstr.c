/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 09:59:26 by jlong             #+#    #+#             */
/*   Updated: 2021/04/12 12:54:05 by jlong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_size;

	i = -1;
	needle_size = ft_strlen(needle);
	if (needle_size == 0)
		return ((char *)haystack);
	while (++i < len && haystack[i] && i <= (len - needle_size))
		if (ft_strncmp(&haystack[i], needle, needle_size) == 0)
			return ((char *)&haystack[i]);
	return (NULL);
}
