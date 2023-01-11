# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 05:18:16 by juwkim            #+#    #+#              #
#    Updated: 2023/01/09 14:04:06 by juwkim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Define the compiler and flags

CC					=	cc
CFLAGS				=	-Wall -Wextra -Werror -O3
ARFLAGS				= 	-rcs

# Define the directories

OBJ_DIR				=	obj
INC_DIR				=	includes

FT_IS_DIR			=	ft_is
FT_LIST_DIR			=	ft_list
FT_MATH_DIR			=	ft_math
FT_MEMORY_DIR		=	ft_memory
FT_PRINTF_DIR		=	ft_printf
FT_STRING_DIR		=	ft_string

# Define the source files

SRCS				=	$(wildcard */*.c)
OBJS				=	$(patsubst %.c, $(OBJ_DIR)/%.o, $(SRCS))

# Define the name

NAME				=	libft.a

all: START $(NAME)

START:
	@echo -n "$(YELLOW)[LIBFT]:\t$(DEF_COLOR)"
	@echo -n "$(RED)[$(DEF_COLOR)"

# Define the target rule
$(NAME) : $(OBJS)
	@$(AR) $(ARFLAGS) $@ $^	
	@echo -n "$(RED)]$(DEF_COLOR)"
	@echo "$(GREEN) => 100%$(DEF_COLOR)"

$(OBJ_DIR)/%.o : %.c | OBJ_DIR_GUARD
	@echo -n "$(YELLOW)=$(DEF_COLOR)"
	@$(CC) $(CFLAGS) -I $(INC_DIR) -c $^ -o $@

OBJ_DIR_GUARD:
	@mkdir -p $(OBJ_DIR)
	@mkdir -p $(OBJ_DIR)/$(FT_IS_DIR)
	@mkdir -p $(OBJ_DIR)/$(FT_LIST_DIR)
	@mkdir -p $(OBJ_DIR)/$(FT_MATH_DIR)
	@mkdir -p $(OBJ_DIR)/$(FT_MEMORY_DIR)
	@mkdir -p $(OBJ_DIR)/$(FT_PRINTF_DIR)
	@mkdir -p $(OBJ_DIR)/$(FT_STRING_DIR)

clean:
	@$(RM) -r $(OBJ_DIR)
	@echo "$(BLUE)[LIBFT]:\tobject files$(DEF_COLOR)$(GREEN)  => Cleaned!$(DEF_COLOR)"

fclean: clean
	@$(RM) $(NAME)
	@rm -rf $(OBJ_DIR)
	@echo "$(CYAN)[LIBFT]:\texec. files$(DEF_COLOR)$(GREEN)  => Cleaned!$(DEF_COLOR)"

re: fclean
	@make all
	@echo "$(GREEN)Cleaned and rebuilt everything for libft!$(DEF_COLOR)"

norm:
	@(norminette | grep Error) || (echo "$(GREEN)[LIBFT]:\tNorminette success$(DEF_COLOR)")

.PHONY:	all clean fclean re norm

# Colors

DEF_COLOR	=	\033[0;39m
YELLOW		=	\033[0;33m
GRAY		=	\033[0;90m
RED			=	\033[0;91m
GREEN		=	\033[1;92m
YELLOW		=	\033[1;93m
BLUE		=	\033[0;94m
MAGENTA		=	\033[0;95m
CYAN		=	\033[0;96m
WHITE		=	\033[0;97m
