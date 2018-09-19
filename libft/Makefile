# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/24 14:34:16 by mkhoza            #+#    #+#              #
#    Updated: 2018/06/15 11:45:00 by mkhoza           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

CFLAGS=-Wall -Wextra -Werror -o

SRC = *.c

OUTPUT = *.o

$(NAME): 
	gcc $(CFLAG) -c $(SRC) -I ./
	ar -rc $(NAME) $(OUTPUT)
	ranlib $(NAME)

all: $(NAME)

clean:  
	rm -f $(OUTPUT)

fclean: clean
	rm -f $(NAME)

re: fclean all
