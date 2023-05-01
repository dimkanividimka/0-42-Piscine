/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstarov <dstarov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:07:46 by dstarov           #+#    #+#             */
/*   Updated: 2022/10/25 12:22:45 by dstarov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *dest)
{
	int	x;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	return (x);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	x;

	x = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[x] = src[i];
		i++;
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
