/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agundry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 21:17:10 by agundry           #+#    #+#             */
/*   Updated: 2018/01/05 15:07:03 by agundry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	unsigned char		uc;

	uc = c;
	d = dst;
	s = src;
	if (n)
	{
		while (n > 0)
		{
			*d = *s;
			if ((*d) == uc)
				return (++d);
			d++;
			s++;
			n--;
		}
	}
	return (0);
}
