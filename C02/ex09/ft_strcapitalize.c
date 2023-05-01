/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstarov <dstarov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 17:37:03 by dstarov           #+#    #+#             */
/*   Updated: 2022/10/25 09:22:41 by dstarov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	is_not_letter(char c)
{
	if (c > 'z' || (c > 'Z' && c < 'a') || (c > '9' && c < 'A') || c < '0')
		return (1);
	else
		return (0);
}

char	is_letter(char c)
{
	if (c > 'z' || (c > 'Z' && c < 'a') || (c > '9' && c < 'A') || c < '0')
		return (0);
	else
		return (1);
}

char	is_upper(char c)
{
	if (c >= 'A' && c <= 'Z' )
		return (1);
	else
		return (0);
}

char	is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	shift;
	int	i_minus;

	shift = 'A' - 'a';
	i = 0;
	if (str[i] != '\0' && str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] + shift;
	i++;
	while (str[i] != '\0')
	{
		i_minus = i - 1;
		if (is_not_letter(str[i_minus]) && is_lower(str[i]))
		{
			str[i] = str[i] + shift;
		}
		else if (is_letter(str[i_minus]) && is_upper(str[i]))
			str[i] = str[i] - shift;
		i++;
	}
	return (str);
}
