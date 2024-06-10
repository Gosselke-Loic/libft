/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:29:02 by lgosselk          #+#    #+#             */
/*   Updated: 2024/01/18 10:24:40 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static char	*ft_calloc_string(unsigned int nbr, int *i)
{
	char	*str;

	while (nbr != 0)
	{
		nbr = nbr / 16;
		(*i)++;
	}
	str = ft_calloc(*i + 1, sizeof(char));
	(*i)--;
	return (str);
}

int	ft_print_hex(unsigned int nbr, int asc)
{
	int				i;
	unsigned int	temp;
	char			*str;

	i = 0;
	temp = nbr;
	str = ft_calloc_string(nbr, &i);
	if (str == 0)
		return (0);
	while (temp != 0)
	{
		if ((temp % 16) < 10)
			str[i] = (temp % 16) + 48;
		else
			str[i] = (temp % 16) + asc;
		temp = temp / 16;
		i--;
	}
	ft_putstr_fd(str, 1);
	i = ft_strlen(str);
	free(str);
	if (nbr == 0)
		i += ft_print_char('0');
	return (i);
}
