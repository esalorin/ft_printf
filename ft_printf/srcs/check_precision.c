/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_precision.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenasalorinta <eenasalorinta@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 20:32:53 by eenasalorin       #+#    #+#             */
/*   Updated: 2020/06/16 20:35:45 by eenasalorin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_precision(t_data *d, int i)
{
	if (d->sub[i] >= '0' && d->sub[i] <= '9')
		d->prec = ft_atoi(&d->sub[i]);
	else
		d->prec = 0;
}
