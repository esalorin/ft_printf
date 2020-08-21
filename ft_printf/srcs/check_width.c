/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_width.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenasalorinta <eenasalorinta@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 20:12:30 by eenasalorin       #+#    #+#             */
/*   Updated: 2020/06/16 20:17:45 by eenasalorin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_width(t_data *d)
{
	int	i;

	i = 0;
	while (d->sub[i] && (d->sub[i] < '1' || d->sub[i] > '9')
	&& d->sub[i] != '.')
		i++;
	if (d->sub[i] > '0' && d->sub[i] <= '9')
		d->width = ft_atoi(&d->sub[i]);
}
