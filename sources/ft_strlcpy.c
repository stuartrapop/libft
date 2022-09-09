/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapopor <srapopor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:48:02 by srapopor          #+#    #+#             */
/*   Updated: 2022/09/09 15:31:58 by srapopor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	index;

	if (dstsize == 0)
		return ((size_t)ft_strlen((char *)src));
	index = 0;
	while (src[index] != '\0' && index < dstsize - 1)
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\0';
	return ((size_t)ft_strlen((char *)src));
}
