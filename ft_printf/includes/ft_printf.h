/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalorin <esalorin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/22 15:51:11 by esalorin          #+#    #+#             */
/*   Updated: 2020/08/19 17:52:26 by esalorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/srcs/libft.h"
# include <stdarg.h>

# define CBLACK "\x1B[30m"
# define CBLACKB "\x1B[1;30m"

# define CRED "\x1B[31m"
# define CREDB "\x1B[1;31m"

# define CGREEN "\x1B[32m"
# define CGREENB "\x1B[1;32m"

# define CYELLOW "\x1B[33m"
# define CYELLOWB "\x1B[1;33m"

# define CBLUE "\x1B[34m"
# define CBLUEB "\x1B[1;34m"

# define CMAGENTA "\x1B[35m"
# define CMAGENTAB "\x1B[1;35m"

# define CCYAN "\x1B[36m"
# define CCYANB "\x1B[1;36m"

# define CWHITE "\x1B[37m"
# define CWHITEB "\x1B[1;37m"

# define RESET "\x1B[0m"

# define BGWHITE "\x1B[47m"

# define UNDERLINE "\e[4m"

typedef struct	s_data
{
	int			prec;
	int			width;
	int			zero;
	int			plus;
	int			hash;
	int			minus;
	int			space;
	int			fd;
	int			l;
	int			h;
	int			ll;
	int			hh;
	char		conv;
	char		*sub;
}				t_data;

int		conversion(t_data d, va_list ap);
int		ft_printf(const char *format, ...);
int		ft_dprintf(int fd, const char *format, ...);
int		print_csp(t_data d, va_list ap);
int		print_dioux(t_data d, va_list ap);
int		printf_flags(t_data d, va_list ap);
int		dioux_flags(t_data d, int i, va_list ap);
int		print_double(t_data d, va_list ap);
int		double_flags(t_data d, int i, va_list ap);
int		csp_flags(t_data d, int l, va_list ap);
int		check_di(char *s, t_data d);
int		check_oux(char *s, t_data d);
int		ft_skip(const char *f);
int		make_struct(const char *f, int fd, int i, va_list ap);

void	check_width(t_data *d);
void	check_precision(t_data *d, int i);
void	check_flags(t_data *d);

#endif
