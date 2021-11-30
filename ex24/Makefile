#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acamaras <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/02 12:27:57 by acamaras          #+#    #+#              #
#    Updated: 2021/11/02 17:50:29 by acamaras         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

FILE = libft.a
SOURCE = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c
OBJECT = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
HEADER = includes

all: $(FILE)

$(FILE):
	gcc -Wall -Wextra -Werror -c $(SOURCE) -I $(HEADER)
	ar -rc $(FILE) $(OBJECT)
	ranlib $(FILE)

clean:
	rm -f $(OBJECT)

fclean:
	rm -f $(FILE)

re: fclean all