/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayar <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:47:49 by sayar             #+#    #+#             */
/*   Updated: 2021/11/08 10:33:46 by sayar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const void *str, int c)
{
	char	*nstr;
	char	p;
	int		i;

	nstr = (char *) str;
	p = (char) c;
	i = 0;
	while (nstr[i] != p)
	{
		if (nstr[i] == '\0')
			return (0);
		i++;
	}
	return (&nstr[i]);
}
