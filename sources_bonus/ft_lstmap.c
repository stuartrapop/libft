/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapopor <srapopor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 09:10:36 by srapopor          #+#    #+#             */
/*   Updated: 2022/09/15 11:36:32 by srapopor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*current;

	if (lst == NULL)
		return (NULL);
	head = malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	head->content = (*f)(lst->content);
	head->next = NULL;
	current = head;
	while (lst->next != NULL)
	{
		lst = lst->next;
		current->next = malloc(sizeof(t_list));
		if (current->next == NULL)
		{
			ft_lstclear(&head, del);
			free(head);
			return (NULL);
		}
		current = current->next;
		current->content = (*f)(lst->content);
		current->next = NULL;
	}
	return (head);
}
