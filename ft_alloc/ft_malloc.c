/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 09:25:24 by lgosselk          #+#    #+#             */
/*   Updated: 2024/01/18 10:28:14 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*malloc_new(void *content)
{
	t_list	*node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	node->next = NULL;
	node->content = content;
	return (node);
}

void	malloc_add(t_list **lst, t_list *new_node)
{
	t_list	*temp;

	temp = *lst;
	if (temp == NULL)
	{
		*lst = new_node;
		return ;
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;
}

void	*ft_malloc(int size, t_list	**lst)
{
	void	*alloc;

	alloc = malloc(size);
	if (!alloc)
		return (NULL);
	malloc_add(lst, malloc_new(alloc));
	return (alloc);
}
