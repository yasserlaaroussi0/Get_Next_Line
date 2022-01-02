/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaarous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 18:43:48 by ylaarous          #+#    #+#             */
/*   Updated: 2022/01/02 18:43:50 by ylaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "get_next_line.h"

char	*ft_store(char *str)
{
	int		i;
	int		j;
	char	*buff;

	i = 0;
	j = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\0')
	{
		free (str);
		return (NULL);
	}
	buff = (char *) malloc(sizeof(char) * (ft_strlen(str) - i + 1));
	if (!buff)
		return (NULL);
	i++;
	while (str[i])
	{
		buff[j++] = str[i];
		i++;
	}
	buff[j] = '\0';
	free (str);
	return (buff);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		*new;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	str = ft_read(str, fd);
	if (!str)
		return (NULL);
	new = ft_myline(str);
	str = ft_store(str);
	return (new);
}
