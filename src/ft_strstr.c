/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agundry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 20:22:45 by agundry           #+#    #+#             */
/*   Updated: 2018/01/05 15:06:49 by agundry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t	n;
	size_t	llen;

	if (*little)
	{
		llen = ft_strlen(little);
		while (*big)
		{
			n = 0;
			while (*(big + n) == *(little + n) && *(little + n))
				n++;
			if (n == llen)
				return ((char *)big);
			big++;
		}
		return (NULL);
	}
	return ((char *)big);
}
