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

# define CBLACK "\x1B[30m"
# define CBLACKB "\x1B[1;30m"
# define CBBLACK "\x1B[90m"
# define CBBLACKB "\x1B[1;90m"

# define CRED "\x1B[31m"
# define CREDB "\x1B[1;31m"
# define CBRED "\x1B[91m"
# define CBREDB "\x1B[1;91m"

# define CGREEN "\x1B[32m"
# define CGREENB "\x1B[1;32m"
# define CBGREEN "\x1B[92m"
# define CBGREENB "\x1B[1;92m"

# define CYELLOW "\x1B[33m"
# define CYELLOWB "\x1B[1;33m"
# define CBYELLOW "\x1B[93m"
# define CBYELLOWB "\x1B[1;93m"

# define CBLUE "\x1B[34m"
# define CBLUEB "\x1B[1;34m"
# define CBBLUE "\x1B[94m"
# define CBBLUEB "\x1B[1;94m"

# define CMAGENTA "\x1B[35m"
# define CMAGENTAB "\x1B[1;35m"
# define CBMAGENTA "\x1B[95m"
# define CBMAGENTAB "\x1B[1;95m"

# define CCYAN "\x1B[36m"
# define CCYANB "\x1B[1;36m"
# define CBCYAN "\x1B[96m"
# define CBCYANB "\x1B[1;96m"

# define CWHITE "\x1B[37m"
# define CWHITEB "\x1B[1;37m"

# define CRESET "\x1B[0m"


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
