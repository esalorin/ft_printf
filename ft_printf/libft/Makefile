# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eenasalorinta <eenasalorinta@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/22 15:38:44 by esalorin          #+#    #+#              #
#    Updated: 2020/06/16 19:09:41 by eenasalorin      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

INC_DIR := ./srcs
SRCS_DIR := ./srcs
OBJ_DIR := ./obj

SRCS := ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c \
ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncat.c ft_strlcat.c ft_strrchr.c \
ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c \
ft_strcat.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strncpy.c \
ft_strchr.c ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c \
ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strtrim.c \
ft_strsplit.c ft_itoa.c ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c ft_putchar_fd.c \
ft_putstr_fd.c ft_putendl_fd.c ft_nbrlen.c ft_putnbr_fd.c ft_strjoin.c ft_lstnew.c \
ft_lstdelone.c ft_strswap.c ft_itoa_base.c ft_atoi_base.c ft_itoa_unsigned.c ft_ftoa.c \
ft_swap.c get_next_line.c ft_chrcount.c ft_array_push.c ft_arraynew.c ft_arraydel.c \
ft_array_merge.c ft_putarray.c ft_strfound.c ft_arraydup.c ft_arrayrem.c ft_joindel.c \
ft_rmchr.c ft_arraylen.c ft_putint_fd.c

OBJ :=	$(addprefix $(OBJ_DIR)/,$(SRCS:.c=.o))

.PHONY: clean fclean all re

all : $(NAME)

$(OBJ_DIR):
	@/bin/mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o:$(SRCS_DIR)/%.c
	@gcc -Wall -Wextra -Werror -I $(INC_DIR) -o $@ -c $<

$(NAME) : $(OBJ_DIR) $(OBJ)
	@ar -rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all
