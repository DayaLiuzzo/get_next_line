/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dliuzzo <dliuzzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 17:57:58 by dliuzzo           #+#    #+#             */
/*   Updated: 2023/12/07 17:58:38 by dliuzzo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4
# endif

# include <stdlib.h>
# include <unistd.h>

char	*ft_strjoin(char *s1, char *s2);
char	*get_line(char *storage);
char	*save_line(char *storage);
char	*line_reader(int fd, char *storage);
char	*get_next_line(int fd);
int		find_the_n(char *storage);
int		ft_strlen(const char *str);

#endif