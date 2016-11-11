/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbricqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 10:04:42 by thbricqu          #+#    #+#             */
/*   Updated: 2016/11/11 10:21:14 by thbricqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "stdio.h"

static int		ft_countwords(char const *s, char c)
{
	int	words;
	int	i;
	int	test;

	i = 0;
	test = 0;
	words = 0;
	while (s[i])
	{
		if (test == 1 && s[i] == c)
			test = 0;
		if (test == 0 && (s[i] != c && s[i]))
		{
			test = 1;
			words++;
		}
		i++;
	}
	return (words);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		b;
	char	**tab;

	b = 0;
	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	if ((tab = (char **)malloc(sizeof(char*) * (ft_countwords(s, c)))) == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i + j] != c && s[i + j] != '\0')
			j++;
		if (j > 0)
		{
			if ((tab[b] = (char *)malloc(sizeof(char) * (j))) == NULL)
				return NULL;
			j = 0;
			while (s[i] != c && s[i] != '\0')
				tab[b][j++] = s[i++];
			tab[b++][j] = '\0';
			j = 0;
		}
		if (s[i] == '\0')
			break ;
		if (s[i] == c)
		{
			while (s[i] == c && s[i] != '\0')
				i++;
		}
	}
	return (tab);
}
