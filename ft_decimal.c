/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayidbelh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 21:38:24 by ayidbelh          #+#    #+#             */
/*   Updated: 2021/11/28 21:38:30 by ayidbelh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_decimal(unsigned long int num)
{
	char	*res;
	int		counter;

	res = ft_itoa(num);
	ft_putstr_fd(res, 1);
	counter = ft_strlen(res);
	free(res);
	return (counter);
}
