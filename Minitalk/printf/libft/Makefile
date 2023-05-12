# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kderhet <kderhet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/10 14:01:47 by kderhet           #+#    #+#              #
#    Updated: 2023/04/27 11:51:26 by kderhet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
INCLUDE = ../includes
CC = gcc
CFLAGS = -Wall -Werror -Wextra -I 
AR = ar rcs
ECHO = echo

SOURCES = ft_bzero ft_isalnum ft_isalpha \
		ft_isascii ft_isdigit ft_isprint \
		ft_memchr ft_memcmp ft_memcpy \
		ft_memmove ft_memset ft_strchr \
		ft_strlcat ft_strlcpy ft_strlen \
		ft_strncmp ft_strnstr ft_strrchr \
		ft_tolower ft_toupper ft_atoi \
		ft_strdup ft_calloc ft_substr \
		ft_strjoin ft_strtrim ft_split \
		ft_itoa ft_strmapi ft_striteri \
		ft_putchar_fd ft_putstr_fd ft_putendl_fd \
		ft_putnbr_fd ft_atoi

SRCS = $(addsuffix .c, $(SOURCES))
OBJS = $(addsuffix .o, $(SOURCES))

all : $(NAME)

$(NAME) : $(OBJS)
	@$(AR) -r $@ $?
	@$(ECHO) "[$(NAME)] executable successfully created."

%.o: %.c
	@$(CC) -c $(CFLAGS) $(INCLUDE) $?

clean:
	@rm -f $(OBJS)
	@$(ECHO) "[$(NAME)] obj files cleaned."

fclean: clean
	@rm -f $(NAME)
	@$(ECHO) "[$(NAME)] executable removed."

re: fclean all

.PHONY: all clean fclean re
