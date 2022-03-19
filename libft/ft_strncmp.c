/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msahli <msahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 11:21:50 by msahli            #+#    #+#             */
/*   Updated: 2021/02/13 11:22:50 by msahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	a;

	a = 0;
	while (a < n - 1 && s1[a] && s1[a] == s2[a])
		a++;
	if (n)
		return (*((unsigned char *)s1 + a) - *((unsigned char *)s2 + a));
	return (0);
}
