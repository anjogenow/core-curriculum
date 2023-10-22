# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agenow <agenow@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/22 18:39:33 by agenow            #+#    #+#              #
#    Updated: 2023/10/22 18:47:34 by agenow           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBRARY = libft.a
SRC_FILES = $(wildcard srcs/*.c)
OBJ_FILES = $(patsubst srcs/%.c, %.o, $(SRC_FILES))
INCLUDES = ./includes

all: $(LIBRARY)

$(LIBRARY):
	$(CC) -c $(SRC_FILES) -I $(INCLUDES)
	ar rc $(LIBRARY) $(OBJ_FILES)

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(LIBRARY)

re: fclean all
