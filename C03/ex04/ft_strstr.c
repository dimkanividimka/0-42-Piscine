/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstarov <dstarov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:35:42 by dstarov           #+#    #+#             */
/*   Updated: 2022/10/25 12:21:01 by dstarov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	t_f;

	i = 0;
	t_f = 0;
	if (to_find[t_f] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + t_f] == to_find[t_f] && to_find[t_f] != '\0')
		{
			t_f++;
		}
		if (to_find[t_f] == '\0')
		{
			return (str + i);
		}
		i++;
		t_f = 0;
	}
	return (0);
}
