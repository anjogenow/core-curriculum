# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agenow <agenow@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/23 11:23:49 by agenow            #+#    #+#              #
#    Updated: 2023/10/23 12:10:16 by agenow           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
PROGRAM = ft_display_file
SRC_FILES = $(wildcard srcs/*.c)
OBJ_FILES = $(patsubst srcs/%.c, %.o, $(SRC_FILES))

all: $(PROGRAM)

$(PROGRAM):
	$(CC) $(SRC_FILES) -o $(PROGRAM)

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(PROGRAM)

re: fclean all
