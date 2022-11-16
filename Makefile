# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marmonte <marmonte@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 17:18:18 by marmonte          #+#    #+#              #
#    Updated: 2022/10/31 17:18:18 by marmonte         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

CC = clang

CFLAGS = -Wall -Wextra -Werror -I .

RM = rm -f

SRC = $(wildcard *.c)

OBJ = $(SRC:.c=.o)

#B = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
#ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

#B = $(wildcard *.c)

B_OBJ = $(B:.c=.o)

all:	$(NAME)

bonus:	$(B_OBJ)
			ar rcs $(NAME) $(B_OBJ)

$(NAME):	$(OBJ)
			ar rcs $(NAME) $(OBJ)

clean:
			$(RM) $(OBJ) $(B_OBJ)

fclean:	clean
			$(RM) $(NAME)

re:	fclean $(NAME)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	clang -nostartfiles -shared -o libft.so $(OBJ)