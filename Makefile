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
ARFLAGS				= 	-rsc

# Define the directories

BUILD_DIR			=	build
INC_DIR				=	includes

FT_IS_DIR			=	ft_is
FT_LIST_DIR			=	ft_list
FT_MATH_DIR			=	ft_math
FT_MEMORY_DIR		=	ft_memory
FT_PRINTF_DIR		=	ft_printf
FT_STRING_DIR		=	ft_string

# Define the source files

SRCS				=	$(wildcard */*.c)
OBJS				=	$(patsubst %.c, $(BUILD_DIR)/%.o, $(SRCS))
DEPS				=	$(patsubst %.c, $(BUILD_DIR)/%.d, $(SRCS))

# Define the name

NAME				=	lib.a

all: $(NAME)

# Define the target rule
$(NAME) : $(OBJS)
	@$(AR) $(ARFLAGS) $@ $^
	@echo "${GREEN}> Linking of the $(NAME) is success 🎉${END}"

# Define the compile rules
$(BUILD_DIR)/$(FT_IS_DIR)/%.o: $(FT_IS_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

$(BUILD_DIR)/$(FT_LIST_DIR)/%.o: $(FT_LIST_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

$(BUILD_DIR)/$(FT_MATH_DIR)/%.o: $(FT_MATH_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

$(BUILD_DIR)/$(FT_MEMORY_DIR)/%.o: $(FT_MEMORY_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

$(BUILD_DIR)/$(FT_PRINTF_DIR)/%.o: $(FT_PRINTF_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

$(BUILD_DIR)/$(FT_STRING_DIR)/%.o: $(FT_STRING_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

clean:
	@$(RM) $(OBJS) $(DEPS)
	@rm -rf $(BUILD_DIR)
	@echo "${YELLOW}> All objects files of the $(NAME) have been deleted ❌${END}"

fclean:
	@$(RM) $(OBJS) $(DEPS) $(NAME)
	@rm -rf $(BUILD_DIR)
	@echo "${YELLOW}> Cleaning of the $(NAME) has been done ❌${END}"

re: fclean
	@make all

.PHONY:	all clean fclean re

# minimal color codes
END				=	$'\x1b[0m
BOLD			=	$'\x1b[1m
UNDER			=	$'\x1b[4m
REV				=	$'\x1b[7m
GREY			=	$'\x1b[30m
RED				=	$'\x1b[31m
GREEN			=	$'\x1b[32m
YELLOW			=	$'\x1b[33m
BLUE			=	$'\x1b[34m
PURPLE			=	$'\x1b[35m
CYAN			=	$'\x1b[36m
WHITE			=	$'\x1b[37m

-include $(DEPS)