# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kderhet <kderhet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/26 16:09:05 by kderhet           #+#    #+#              #
#    Updated: 2023/05/12 14:35:07 by kderhet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
INCLUDE = -I push_swap.h
PRINTF = printf
CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
AR = ar rcs
ECHO = echo

SOURCE =	push_swap instruction1 instruction2 instruction3 \
			utils1 utils2 ft_algorithm ft_free_pile 		 \
			ft_error ft_checks ft_rotate_type ft_case_ab	 \
			ft_apply ft_case_ba

SRCS = $(addsuffix .c, $(SOURCE))
OBJS = $(addsuffix .o, $(SOURCE))

all : $(NAME)

$(NAME) : $(OBJS)
	@make -C $(PRINTF)
	@$(CC) $(CFLAGS) $(PRINTF)/libftprintf.a $(INCLUDE) -o $(NAME) $(SRCS)
	@$(ECHO) "[$(NAME)] executable successfully created."

clean : 
	@$(RM) -r $(OBJS)
	@$(ECHO) "[$(NAME)] obj files cleaned."
	@make clean -C $(PRINTF)


fclean : clean
	@$(RM) $(NAME)
	@$(ECHO) "[$(NAME)] executable removed."
	@make fclean -C $(PRINTF)


re : fclean all


.PHONY : all clean fclean re