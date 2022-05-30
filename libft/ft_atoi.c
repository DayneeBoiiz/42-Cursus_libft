/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 13:29:20 by sayar             #+#    #+#             */
/*   Updated: 2021/11/09 16:11:13 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(int nbr, int sign)
{
	if (sign == '-')
		return (nbr * -1);
	else
		return (nbr);
}

int	ft_atoi(const char *str)
{
	size_t	i;
	size_t	nbr;
	int		symb;

	symb = 1;
	i = 0;
	nbr = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		symb = str[i];
		i++;
	}
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		nbr *= 10;
		nbr += str[i] - '0';
		i++;
	}
	return (check(nbr, symb));
}
