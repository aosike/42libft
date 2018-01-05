/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agundry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 19:25:21 by agundry           #+#    #+#             */
/*   Updated: 2018/01/05 14:57:50 by agundry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	size_t		size;
	char		*str;
	long long	nb;

	nb = n;
	size = ft_cntdigits(n);
	if (!(str = ft_strnew(size)))
		return (NULL);
	*str = nb < 0 ? '-' : *str;
	*str = nb == 0 ? '0' : *str;
	nb = nb < 0 ? -nb : nb;
	while (nb != 0)
	{
		str[size - 1] = (unsigned char)((nb % 10) + '0');
		nb /= 10;
		size--;
	}
	return (str);
}
