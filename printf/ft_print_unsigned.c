/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:42:30 by lgosselk          #+#    #+#             */
/*   Updated: 2024/01/18 10:24:45 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static void	ft_print_number(unsigned int nbr, int *i)
{
	if (nbr >= 10)
	{
		ft_print_number(nbr / 10, i);
		(*i)++;
		ft_print_number(nbr % 10, i);
	}
	else
		ft_putchar_fd(nbr + 48, 1);
}

int	ft_print_unsigned(unsigned int nbr)
{
	int	i;

	i = 1;
	ft_print_number(nbr, &i);
	return (i);
}
