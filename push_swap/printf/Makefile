# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kderhet <kderhet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/07 11:31:20 by kderhet           #+#    #+#              #
#    Updated: 2023/04/27 11:55:30 by kderhet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
INCLUDE = includes
LIBFT = libft
SRCS_DIR = srcs/
CC = gcc
CFLAGS = -Wall -Werror -Wextra -I
RM = rm -f
AR = ar rcs
ECHO = echo

SOURCES = ft_printf ft_printf_need ft_puthexa \
		  ft_putptr ft_putunsigned

SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(SOURCES)))
OBJS = $(addprefix $(SRCS_DIR), $(addsuffix .o, $(SOURCES)))

all : $(NAME)

$(NAME) : $(OBJS)
	@make -C $(LIBFT)
	@mv *.o $(SRCS_DIR)
	@cp libft/libft.a .
	@mv libft.a $(NAME)
	@$(AR) $(NAME) $(OBJS)
	@$(ECHO) "[$(NAME)] executable successfully created."

$(SRCS_DIR)%.o : $(SRCS_DIR)%.c
	@$(CC) -c $(CFLAGS) $(INCLUDE) $?

clean : 
	@$(RM) -r $(OBJS)
	@$(ECHO) "[$(NAME)] obj files cleaned."
	@make clean -C $(LIBFT)

fclean : clean
	@$(RM) $(NAME)
	@make fclean -C $(LIBFT)
	@$(ECHO) "[$(NAME)] executable removed."

re : fclean all

.PHONY : all clean fclean re
