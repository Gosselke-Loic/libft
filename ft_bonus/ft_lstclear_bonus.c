/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 09:50:44 by lgosselk          #+#    #+#             */
/*   Updated: 2024/01/18 10:19:47 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstclear(t_list	**lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*next;

	if (lst)
	{
		temp = *lst;
		while (temp)
		{
			next = temp->next;
			ft_lstdelone(temp, (del));
			temp = next;
		}
		*lst = NULL;
	}
}
