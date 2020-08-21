# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esalorin <esalorin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/17 16:41:55 by eenasalorin       #+#    #+#              #
#    Updated: 2020/08/20 19:54:58 by esalorin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

INC_DIR := ./includes
SRCS_DIR := ./srcs
OBJ_DIR := ./obj

SRCS :=	check_dioux.c \
		check_flags.c \
		check_precision.c \
		check_width.c \
		conversion.c \
		dioux_flags.c \
		print_csp.c \
		make_struct.c \
		print_dioux.c \
		print_double.c \
		printf_flags.c \
		ft_printf.c \
		ft_dprintf.c \
		skip.c \

OBJ :=	$(addprefix $(OBJ_DIR)/,$(SRCS:.c=.o))

.PHONY : all clean fclean re

all : $(NAME)

$(OBJ_DIR):
	@/bin/mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o:$(SRCS_DIR)/%.c
	@gcc -Wall -Wextra -Werror -I $(INC_DIR) -o $@ -c $<

$(NAME) : $(OBJ_DIR) $(OBJ)
	@make -C libft/
	@cp libft/libft.a ./libftprintf.a
	@ar -rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean :
	@rm -f $(OBJ)
	@make clean -C libft/

fclean : clean
	@rm -f $(NAME)
	@make fclean -C libft/

re : fclean all
