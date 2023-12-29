# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: blozano- <blozano-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/26 10:18:05 by blozano-          #+#    #+#              #
#    Updated: 2023/12/26 10:29:40 by blozano-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = gcc -Wall -Werror -Wextra
AR = ar rcs
INCLUDE = ft_printf.h
RM = rm -rf

NAME = ft_printf.a

SRC = ft_printf.c ft_printf_utils.c
OBJ = $(SRC:.c=.o)

$(NAME) = $(OBJ)
			$(AR) $(NAME) $(OBJ)
all = $(NAME)

clean = $(RM) $(OBJ)

fclean = $(RM) $(NAME)

re = fclean all