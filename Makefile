# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apedrosa <apedrosa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/16 17:11:38 by apedrosa          #+#    #+#              #
#    Updated: 2022/11/16 17:11:38 by apedrosa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_memset ft_bzero ft_memcpy ft_memmove ft_memchr\
ft_memcmp ft_strlen ft_strlcpy ft_strlcat ft_strchr ft_strrchr\
ft_strncmp ft_atoi ft_isalpha ft_isdigit ft_isalnum\
ft_isascii ft_isprint ft_toupper ft_tolower ft_calloc ft_strdup\
ft_substr ft_strjoin ft_strnstr ft_split ft_strtrim ft_itoa\
ft_strmapi ft_striteri ft_putchar_fd ft_putstr_fd ft_putendl_fd\
ft_putnbr_fd ft_lstsize ft_lstlast\

Bonus = ft_lstnew ft_lstadd_front\

CC =cc
RM =rm -f
CFLAGS = -Wall -Werror -Wextra

all:$(NAME)

$(NAME): $(SRC:=.o)
			ar rc $(NAME) $(SRC:=.o)
clean:
	$(RM)	$(SRC:=.o) $(Bonus:=.o)
fclean: clean
		$(RM)	$(NAME)
re:	fclean	$(NAME)
bonus: $(SRC:=.o) $(Bonus:=.o)
			ar rc $(NAME) $(SRC:=.o) $(Bonus:=.o)
