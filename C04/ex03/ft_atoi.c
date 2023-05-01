/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstarov <dstarov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:11:04 by dstarov           #+#    #+#             */
/*   Updated: 2022/10/26 20:32:13 by dstarov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_white_space(char c)
{
	if (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v')
		return (1);
	else
		return (0);
}

int	is_sign(char c)
{
	if (c == '-' || c == '+')
		return (1);
	else
		return (0);
}

int	is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (is_white_space(str[i]))
		i++;
	while (is_sign(str[i]))
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (is_numeric(str[i]))
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (sign * res);
}
