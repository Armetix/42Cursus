# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kderhet <kderhet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/26 16:09:05 by kderhet           #+#    #+#              #
#    Updated: 2023/04/27 11:51:58 by kderhet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAMEC = client
NAMES = server
INCLUDE = -I minitalk.h
PRINTF = printf
CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
AR = ar rcs
ECHO = echo

SOURCEC = client
SOURCES = server

SRCSS = $(addsuffix .c, $(SOURCES))
OBJSS = $(addsuffix .o, $(SOURCES))

SRCSC = $(addsuffix .c, $(SOURCEC))
OBJSC = $(addsuffix .o, $(SOURCEC))

all : $(NAMEC) $(NAMES)

$(NAMEC) : $(OBJSC)
	@make -C $(PRINTF)
	@$(CC) $(CFLAGS) $(PRINTF)/libftprintf.a $(INCLUDE) -o $(NAMEC) $(SRCSC)
	@$(ECHO) "[$(NAMEC)] executable successfully created."

$(NAMES) : $(OBJSS)
	@$(CC) $(CFLAGS) $(PRINTF)/libftprintf.a $(INCLUDE) -o $(NAMES) $(SRCSS)
	@$(ECHO) "[$(NAMES)] executable successfully created."

clean : 
	@$(RM) -r $(OBJSC)
	@$(RM) -r $(OBJSS)
	@$(ECHO) "[$(NAMEC)] and [$(NAMES)] obj files cleaned."
	@make clean -C $(PRINTF)


fclean : clean
	@$(RM) $(NAMEC)
	@$(RM) $(NAMES)
	@$(ECHO) "[$(NAMEC)] and [$(NAMES)] executable removed."
	@make fclean -C $(PRINTF)


re : fclean all


.PHONY : all clean fclean re