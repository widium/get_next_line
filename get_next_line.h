/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennace <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:03:26 by ebennace          #+#    #+#             */
/*   Updated: 2021/12/07 15:38:47 by ebennace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>
# include <fcntl.h>

char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *src);
char	*ft_substr(char const *s, int start, int len);
char	*get_next_line(int fd);
char	*ft_separation(char **statik, int retour);

int		ft_strlen(const char *str);
int		ft_strlcpy(char *dest, const char *src, int n);
int		index_newline(char *buf);
void	ft_append(char **statik, char *buf, int retour);

#endif
