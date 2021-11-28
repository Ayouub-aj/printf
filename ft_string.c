/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayidbelh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 21:40:38 by ayidbelh          #+#    #+#             */
/*   Updated: 2021/11/28 21:40:41 by ayidbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_string(const char *c)
{
	size_t	a;
	size_t	b;

	if (!c)
		return (ft_string("(null)"));
	a = 0;
	b = ft_strlen(c);
	while (a < b)
	{
		write (1, c++, 1);
		a++;
	}
	return (a);
}
