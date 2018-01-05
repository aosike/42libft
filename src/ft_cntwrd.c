/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cntwrd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agundry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 18:33:06 by agundry           #+#    #+#             */
/*   Updated: 2018/01/05 14:39:48 by agundry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_cntwrd(const char *s1)
{
	const char	*s;
	size_t		i;

	s = s1;
	i = 0;
	while (*s)
	{
		while (ft_isspace(*s++))
			;
		if (!(ft_isspace(*s++)))
		{
			i++;
			while (!(ft_isspace(*s++)))
				;
		}
	}
	return (i);
}
