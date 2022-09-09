/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapopor <stuartrapop@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:10:23 by srapopor          #+#    #+#             */
/*   Updated: 2022/09/08 17:24:51 by srapopor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	index;

	index = 0;
	while (s[index] != '\0')
	{
		if (s[index] == (char)c)
			return ((char *)&s[index]);
		index++;
	}
	if (c == '\0')
	{		
		if (s[index] == (char)c)
			return ((char *)&s[index]);
	}
	return (NULL);
}
