/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:24:05 by lgosselk          #+#    #+#             */
/*   Updated: 2024/01/18 10:24:43 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static void	ft_numlen(unsigned long long ptr, int *i)
{
	while (ptr != 0)
	{
		ptr = ptr / 16;
		(*i)++;
	}
}

static void	ft_print_addr(unsigned long long ptr)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (ptr >= 16)
		ft_print_addr(ptr / 16);
	ft_putchar_fd(hex[ptr % 16], 1);
}

int	ft_print_pointer(void *ptr)
{
	int	i;

	i = 0;
	i += ft_print_string("0x");
	if (ptr == 0)
	{
		ft_putchar_fd('0', 1);
		i++;
		return (i);
	}
	ft_numlen((unsigned long long)ptr, &i);
	ft_print_addr((unsigned long long)ptr);
	return (i);
}
