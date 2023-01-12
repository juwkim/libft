# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 05:18:16 by juwkim            #+#    #+#              #
#    Updated: 2023/01/13 01:58:01 by juwkim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Define the compiler and flags

CC					=	cc
CFLAGS				=	-Wall -Wextra -Werror -pipe -O3
ARFLAGS				= 	-rcs

# Define the directories

SRC_DIR				=	ft_is ft_list ft_math ft_memory ft_printf ft_string
OBJ_DIR				=	obj
INC_DIR				=	includes

# Define the source files

SRCS				=	$(wildcard */*.c)
OBJS				=	$(patsubst %.c, $(OBJ_DIR)/%.o, $(SRCS))

# Define the name

NAME				=	libft.a

all: start $(NAME) end

start:
	@echo -n "$(YELLOW)[LIBFT]:\t$(DEF_COLOR)"
	@echo -n "$(RED)[$(DEF_COLOR)"

end:
	@echo -n "$(RED)]$(DEF_COLOR)"
	@echo "$(GREEN) => 100%$(DEF_COLOR)"

# Define the target rule
$(NAME) : $(OBJS)
	@$(AR) $(ARFLAGS) $@ $^

$(OBJ_DIR)/%.o : %.c | OBJ_DIR_GUARD 
	@echo -n "$(YELLOW)=$(DEF_COLOR)"
	@$(CC) $(CFLAGS) -I $(INC_DIR) -c $^ -o $@

OBJ_DIR_GUARD:
	@mkdir -p $(addprefix $(OBJ_DIR)/, $(SRC_DIR))

clean:
	@$(RM) -r $(OBJ_DIR)
	@echo "$(BLUE)[LIBFT]:\tobject files$(DEF_COLOR)$(GREEN)  => Cleaned!$(DEF_COLOR)"

fclean: clean
	@$(RM) $(NAME)
	@rm -rf $(OBJ_DIR)
	@echo "$(CYAN)[LIBFT]:\texec. files$(DEF_COLOR)$(GREEN)   => Cleaned!$(DEF_COLOR)"

re: fclean
	@make all
	@echo "$(GREEN)Cleaned and rebuilt everything for libft!$(DEF_COLOR)"

norm:
	@(norminette . | grep Error) || (echo "$(GREEN)[LIBFT]:\tNorminette Success$(DEF_COLOR)")

.PHONY:	all clean fclean re norm OBJ_DIR_GUARD start end

#Colors

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
