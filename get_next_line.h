/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaarous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 18:44:04 by ylaarous          #+#    #+#             */
/*   Updated: 2022/01/02 18:44:06 by ylaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

char	*get_next_line(int fd);
char	*ft_strchr(char *str, int c);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_myline(char *str);
char	*ft_read(char *str, int fd);
char	*ft_store(char *str);
size_t	ft_strlen(char *str);

#endif
