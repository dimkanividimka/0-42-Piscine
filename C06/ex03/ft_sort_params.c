/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstarov <dstarov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 18:31:50 by dstarov           #+#    #+#             */
/*   Updated: 2022/10/31 18:39:52 by dstarov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_int_tab(char **tab, int size)
{
	int		c1;
	int		c2;
	char	*temp;

	c1 = 1;
	while (c1 < size)
	{
		c2 = 1;
		while (c2 <= size - c1)
		{
			if (ft_strcmp(tab[c2], tab[c2 + 1]) > 0)
			{
				temp = tab[c2];
				tab[c2] = tab[c2 + 1];
				tab[c2 + 1] = temp;
			}
			c2++;
		}
		c1++;
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	arg;

	if (argc > 1)
	{
		arg = argc - 1;
		ft_sort_int_tab(argv, arg);
		while (arg != 0)
		{
			ft_putstr(argv[argc - arg]);
			arg--;
		}
		return (0);
	}
	return (0);
}
