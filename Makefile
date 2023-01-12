# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 05:18:16 by juwkim            #+#    #+#              #
#    Updated: 2023/01/13 06:31:55 by juwkim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Define the compiler and flags

CC					:=	cc
CFLAGS				:=	-Wall -Wextra -Werror -pipe -O3
ARFLAGS				:= 	-rcs

# Define the directories

SRC_DIR				:=	ft_is ft_list ft_math ft_memory ft_printf ft_string
OBJ_DIR				:=	obj
INC_DIR				:=	includes

# Define the source files

SRCS				:=	$(wildcard */*.c)
OBJS				:=	$(patsubst %.c, $(OBJ_DIR)/%.o, $(SRCS))

# Define the variables for progress bar

TOTAL_FILES			:=	$(shell find . -type f -name *.c | wc -l)
COMPILED_FILES		=	0
STEP				:=	100

# Define the name

NAME				:=	libft.a

# Define the rules

all: $(NAME)

$(NAME) : $(OBJS)
	@$(AR) $(ARFLAGS) $@ $^
	@printf "\n"

$(OBJ_DIR)/%.o : %.c | dir_guard
	$(eval COMPILED_FILES = $(shell expr $(COMPILED_FILES) + 1))
	$(eval PROGRESS = $(shell expr $(COMPILED_FILES) "*" $(STEP) / $(TOTAL_FILES)))
	@printf "                                                                                                   \r"
	@printf "$(YELLOW)[LIBFT] [%02d/%02d] (%6.2f%%) Compiling $^\r$(DEF_COLOR)" $(COMPILED_FILES) $(TOTAL_FILES) $(PROGRESS)
	@$(CC) $(CFLAGS) -I $(INC_DIR) -c $^ -o $@

dir_guard:
	@mkdir -p $(addprefix $(OBJ_DIR)/, $(SRC_DIR))

progress_bar:
	$(eval COMPILED_FILES = $(shell expr $(COMPILED_FILES) + 1))
	$(eval PROGRESS = $(shell expr $(COMPILED_FILES) "*" $(STEP) / $(TOTAL_FILES)))
	@printf "                                                                                                   \r"
	@printf "$(YELLOW)[LIBFT] [%02d/%02d] (%6.2f%%) Compiling $^\r$(DEF_COLOR)" $(COMPILED_FILES) $(TOTAL_FILES) $(PROGRESS)

norm:
	@(norminette | grep Error) || (printf "$(GREEN)[LIBFT]:\tNorminette Success\n$(DEF_COLOR)")

clean:
	@$(RM) -r $(OBJ_DIR)
	@printf "$(BLUE)[LIBFT]:\tobj. dep. files$(DEF_COLOR)$(GREEN)	=> Cleaned!\n$(DEF_COLOR)"

fclean: clean
	@$(RM) $(NAME)
	@printf "$(CYAN)[LIBFT]:\texec. files$(DEF_COLOR)$(GREEN)	=> Cleaned!\n$(DEF_COLOR)"

re: fclean
	@$(MAKE) all
	@printf "$(GREEN)Cleaned and rebuilt everything for libft!\n$(DEF_COLOR)"

.PHONY:	all clean fclean re dir_guard norm progress_bar

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
