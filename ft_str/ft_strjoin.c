/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgosselk <lgosselk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:38:39 by lgosselk          #+#    #+#             */
/*   Updated: 2024/01/18 10:20:23 by lgosselk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		i;
	int		j;
	int		total;
	char	*result;

	if (!s2)
		return (NULL);
	total = (ft_strlen(s1) + ft_strlen(s2));
	result = (char *) malloc((total + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	j = 0;
	i = -1;
	if (s1)
		while (s1[++i] != '\0')
			result[i] = (char) s1[i];
	while (s2[j] != '\0')
		result[i++] = (char) s2[j++];
	result[total] = '\0';
	return (result);
}
