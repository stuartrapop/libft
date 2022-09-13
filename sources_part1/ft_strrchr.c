/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stuartrapoport <stuartrapoport@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 08:51:27 by srapopor          #+#    #+#             */
/*   Updated: 2022/09/12 20:10:43 by stuartrapop      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	int	length;
	int	index;

	length = ft_strlen(s);
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
