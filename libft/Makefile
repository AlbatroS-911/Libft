# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tokrabem <tokrabem@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/20 19:37:35 by tokrabem          #+#    #+#              #
#    Updated: 2026/01/21 06:01:31 by tokrabem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
EXEC = output
CFLAGS = -Wall -Wextra -Werror
SRC = $(wildcard *.c)
OBJ = $(SRC:.c = .o)

all : $(EXEC)

$(EXEC) : $(OBJ)
	$(CC) -o $(EXEC) $(OBJ)

%.o : %.c
	$(CC) -o $(OBJ) -c $(SRC) $(CFLAGS) 

clean :
	rm -rf *.o

