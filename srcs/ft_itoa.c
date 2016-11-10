/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbricqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 15:11:25 by thbricqu          #+#    #+#             */
/*   Updated: 2016/11/09 16:47:23 by thbricqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strleni(int n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	char			*str;
	size_t			len;
	unsigned int	nb;

	nb = n;
	len = ft_strleni(n);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	len--;
	if (n == 0)
		str[len] = '0';
	if (n < 0)
	{
		nb *= -1;
		str[0] = '-';
	}
	while (nb)
	{
		str[len] = (nb % 10) + 48;
		nb = nb / 10;
		len--;
	}
	return (str);
}
