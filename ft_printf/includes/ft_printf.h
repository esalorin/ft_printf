/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalorin <esalorin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/22 15:51:11 by esalorin          #+#    #+#             */
/*   Updated: 2020/01/22 17:07:26 by esalorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_print_csp(char c, va_list ap, int *m, int flag);
int		ft_print_dioux(char c, va_list ap, int f, int *m);
int		ft_print_flags(char *sub, va_list ap);
int		ft_dioux_flags(char *s, int i, va_list ap);
int		ft_print_double(va_list ap, int p, int len, int *m);
int		ft_double_flags(char *s, int i, va_list ap);
int		ft_csp_flags(char *s, int l, va_list ap);
int		ft_check_min(char *s);
int		ft_check_precision(char *s, int i);
int		ft_check_di(char *s, int *m);
int		ft_check_oux(char *s, char c, int *m);

void	ft_check_flags(char *s, int *m);

#endif
