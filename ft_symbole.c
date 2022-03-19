/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_symbole.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msahli <msahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 11:17:28 by msahli            #+#    #+#             */
/*   Updated: 2021/02/13 11:17:38 by msahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_isin(int c, char *set)
{
	while (set && *set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

int		ft_isaconversion(int c)
{
	if (ft_isin(c, "cspdiuxX%"))
		return (1);
	return (0);
}

int		ft_isflag(int c)
{
	if (ft_isin(c, " -0"))
		return (1);
	return (0);
}
