/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbricqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 07:01:00 by thbricqu          #+#    #+#             */
/*   Updated: 2016/11/04 07:01:01 by thbricqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h> // write
# include <string.h> // string
# include <ctype.h> // librairie pour les fonctions isbidule
# include <stdlib.h> // malloc

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_swap(int *a, int *b);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isisascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strdup(char *src);
char	*ft_strcat(char *dest, char *src);



#endif