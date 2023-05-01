/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime_fixed.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstarov <dstarov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 22:15:56 by dstarov           #+#    #+#             */
/*   Updated: 2022/11/01 18:24:22 by dstarov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	tmp;

	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (0);
	tmp = 2;
	while (nb / tmp >= tmp)
	{
		if (nb % tmp == 0)
			return (0);
		tmp++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	num;

	if (ft_is_prime(nb))
		return (nb);
	num = nb + 1;
	while (!ft_is_prime(num))
		num++;
	return (num);
}
