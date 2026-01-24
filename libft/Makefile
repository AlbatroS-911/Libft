# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tokrabem <tokrabem@student.42antananari    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/20 19:37:35 by tokrabem          #+#    #+#              #
#    Updated: 2026/01/24 08:36:10 by tokrabem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#NAME = libft.a
CC = cc
EXEC = output
CFLAGS = -Wall -Wextra -Werror -lbsd
SRC = $(wildcard *.c)
OBJ = $(SRC:.c = .o)

all : $(EXEC)

$(EXEC) : $(OBJ)
	$(CC) -o $(EXEC) $(OBJ)

%.o : %.c
	$(CC) -o $(OBJ) -c $(SRC) $(CFLAGS)

clean :
	rm -rf *.o $(EXEC) 
