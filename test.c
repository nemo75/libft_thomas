/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbricqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 11:42:32 by thbricqu          #+#    #+#             */
/*   Updated: 2016/11/04 11:43:57 by thbricqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

