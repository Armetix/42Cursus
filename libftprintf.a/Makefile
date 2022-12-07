# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kderhet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/07 11:31:20 by kderhet           #+#    #+#              #
#    Updated: 2022/12/07 12:12:12 by kderhet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
INCLUDE = includes
LIBFT = libft
SRCS_DIR = srcs/
OBJS_DIR = objs/
CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
AR = ar rcs

SOURCES = ft_printf ft_printf_need ft_puthexa \
		  ft_putptr ft_putunsigned

SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(SOURCES)))
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(SOURCES)))

all : $(NAME)

$(NAME) : $(OBJS)
	echo "hello"
	make -C $(LIBFT)
	cp libft/libft.a .
	mv libft.a $(NAME)
	$(AR) $(NAME) $(OBJS)

$(OBJS_DIR)%.o : $(SRCS_DIR).c
	$(CC) -c $(CFLAGS) $(INCLUDE) $?

clean : 
	$(RM) -r $(NAME)
	make clean -C $(LIBFT)/libft.a

fclean : clean
	$(RM) $(NAME)
	$(RM) $(LIBFT)/libft.a

re : fclean all

.PHONY : all clean fclean re
