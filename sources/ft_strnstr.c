/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapopor <srapopor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 10:11:04 by srapopor          #+#    #+#             */
/*   Updated: 2022/09/09 15:53:41 by srapopor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	index1;
	size_t	index2;

	index1 = 0;
	if (len == 0 || (needle[0] == '\0'))
		return ((char *)haystack);
	while (haystack[index1] != '\0' && index1 < len)
	{
		index2 = 0;
		while (needle[index2] != '\0' && (haystack[index1] == needle[index2]) \
			&& (index1 + index2) < len)
			index2++;
		if (ft_strlen((char *)needle) == (int)index2)
			return ((char *)&haystack[index1]);
		index1++;
	}
	return (NULL);
}
