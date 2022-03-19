/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msahli <msahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 11:20:46 by msahli            #+#    #+#             */
/*   Updated: 2021/02/13 11:21:14 by msahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *dest;

	if (!len)
		return (b);
	dest = (unsigned char *)b;
	while (len--)
		*dest++ = (unsigned char)c;
	return (b);
}
