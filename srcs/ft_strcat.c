/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbricqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 08:38:41 by thbricqu          #+#    #+#             */
/*   Updated: 2016/11/04 08:38:42 by thbricqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "string.h"
#include "unistd.h"

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int c;
	int b;

	b = 0;
	i = 0;
	c = 0;
	while (dest[i])
		i++;
	while (src[b] != '\0')
		b++;
	i = i - b;
	while (c++ <= b)
		dest[i + c] = src[c];
	dest[i + b] = '\0';
	return (char *)(&dest[0]);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main()
{
	char tab[13] = "coucou";
	char tab2[6] = "salut";

	ft_putstr(strcat(tab, tab2));
	printf("%c\n",'\n');
	ft_putstr(ft_strcat(tab, tab2));
}
