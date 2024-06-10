/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:19:17 by lgosselk          #+#    #+#             */
/*   Updated: 2024/01/18 10:24:44 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_print_string(char *str)
{
	int	i;

	if (str == NULL)
		str = "(null)";
	i = ft_strlen(str);
	ft_putstr_fd(str, 1);
	return (i);
}
