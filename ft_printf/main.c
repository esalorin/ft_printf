/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalorin <esalorin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/22 19:36:50 by esalorin          #+#    #+#             */
/*   Updated: 2020/01/08 17:47:49 by esalorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main()
{
	int a = 3;
	char c = 'a';
	unsigned int	u = 4294967295;
	long long		l = 922337203685758071;

	printf("\n\n%ld\n", l);
	printf("printf c = %c , s = %s\n", c, "hei");
	ft_printf("ft_printf c = %c , s = %s\n", c, "hei");
	printf("printf s = %s\n", "moi");
	ft_printf("ft_printf s = %s\n", "moi");
	printf("printf p = %p\n", &a);
	ft_printf("ft_printf p = %p\n", &a);
	printf("printf %dmoi, %o, %x, %X %u\n", 30, 30, 30, 30, u);
	ft_printf("ft_printf %dmoi, %o, %x, %X %u\n", 30, 30, 30, 30, u);
	printf("printf ld = %ld\n", l);
	ft_printf("ft_printf ld = %ld\n", l);
	printf("printf hu = %hu\n", 123456789);
	ft_printf("ft_printf hu = %hu\n", 123456789);

	printf("\nprintf %d\nft_printf %d\n", printf("moi %s", "moi"), ft_printf("moi %s", "moi"));
	return (0);
}
