# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgreshne <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/18 23:41:36 by mgreshne          #+#    #+#              #
#    Updated: 2024/01/18 23:41:45 by mgreshne         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
СС = gсс
CFLAGS = -Wall -Wextra -Werror
SRC = main.c

OBJ = main.o


all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRC)
	$(CC) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
