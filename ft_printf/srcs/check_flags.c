/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenasalorinta <eenasalorinta@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 20:06:28 by eenasalorin       #+#    #+#             */
/*   Updated: 2020/06/16 20:36:36 by eenasalorin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		check_flags(t_data *d)
{
	int i;

	i = 0;
	while (d->sub[i] && d->sub[i] != '.' && (d->sub[i] < '1' || d->sub[i] > '9'))
	{
		if (d->sub[i] == '#')
			d->hash = 1;
		else if (d->sub[i] == '0')
			d->zero = 1;
		else if (d->sub[i] == '+')
			d->plus = 1;
		else if (d->sub[i] == '-')
			d->minus = 1;
		else if (d->sub[i] == ' ')
			d->space = 1;
		i++;
	}
}
