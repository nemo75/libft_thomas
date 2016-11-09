# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thbricqu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/04 06:54:25 by thbricqu          #+#    #+#              #
#    Updated: 2016/11/04 06:54:26 by thbricqu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC_C = ./srcs/
SRC = 	$(SRC_C)ft_putchar.c $(SRC_C)ft_putstr.c $(SRC_C)ft_putnbr.c $(SRC_C)ft_atoi.c \
		$(SRC_C)ft_strlen.c $(SRC_C)ft_swap.c $(SRC_C)ft_strcmp.c $(SRC_C)ft_strdup.c \
		$(SRC_C)ft_isalnum.c $(SRC_C)ft_isalpha.c $(SRC_C)ft_isascii.c $(SRC_C)ft_isdigit.c \
		$(SRC_C)ft_isprint.c $(SRC_C)ft_strcpy.c $(SRC_C)ft_strncpy.c $(SRC_C)ft_strncmp.c \
		$(SRC_C)ft_strcat.c $(SRC_C)ft_toupper.c $(SRC_C)ft_tolower.c $(SRC_C)ft_strncat.c
FLAG = -Wall -Werror -Wextra
HEADERS = ./includes/
OBJ =	ft_putchar.o ft_putstr.o ft_atoi.o ft_putnbr.o ft_strlen.o ft_swap.o ft_strcmp.o \
		ft_strdup.o ft_isprint.o ft_isdigit.o ft_isalpha.o ft_isascii.o ft_isalnum.o ft_strncmp.o \
		ft_strcpy.o ft_strncmp.o ft_strncpy.o ft_strcat.o ft_toupper.o ft_tolower.o
OPTIONS = -c -I $(HEADERS)

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(OPTIONS) $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f  $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all