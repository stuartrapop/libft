/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapopor <srapopor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 08:51:27 by srapopor          #+#    #+#             */
/*   Updated: 2022/09/09 15:34:54 by srapopor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	int	length;
	int	index;

	length = ft_strlen((char *)s);
	if (c == '\0')
		return ((char *)&s[length]);
	index = length;
	while (index > 0)
	{
		index--;
		if (c == s[index])
			return ((char *)&s[index]);
	}
	return (NULL);
}
