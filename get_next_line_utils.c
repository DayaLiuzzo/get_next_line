/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dliuzzo <dliuzzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 17:58:02 by dliuzzo           #+#    #+#             */
/*   Updated: 2023/12/07 18:00:15 by dliuzzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	find_the_n(char *storage)
{
	int	i;

	i = 0;
	if (!storage)
		return (0);
	while (storage && storage[i])
	{
		if (storage[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen(const char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = 0;
	if (!s1 && !s2)
		return (NULL);
	dest = (char *)malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (!dest)
		return (NULL);
	while (s1 && s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	while (s2 && s2[j])
	{
		dest[i++] = s2[j++];
	}
	dest[i] = '\0';
	if (s1)
		free(s1);
	return (dest);
}
