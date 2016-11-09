/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbricqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 09:39:06 by thbricqu          #+#    #+#             */
/*   Updated: 2016/11/04 09:39:07 by thbricqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "string.h"
#include "unistd.h"

char	*ft_strncat(char *dest, char *src, size_t n)
{
	int i;
	int c;
	int b;

	b = 0;
	i = 0;
	c = 0;
	while (dest[i])
		i++;
	while (src[b])
		b++;
	if (n > b)
		n = b;
	i = i - n;
	while (c++ <= b && c < n)
		dest[i + c] = src[c];
	dest[i + c] = '\0';
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

	ft_putstr(strncat(tab, tab2, 2));
	printf("%c\n",'\n');
	ft_putstr(ft_strncat(tab, tab2, 2));
}