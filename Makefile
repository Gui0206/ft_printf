NAME = libftprintf.a

CC      = gcc
CFLAGS  = -Wall -Wextra -Werror
AR      = ar -rcs
RM      = rm -f
MD      = mkdir -p

SRC_DIR = src/
INC_DIR = inc/
OBJ_DIR = obj/

PRINTF_SRCS = ft_printf.c ft_printf_char.c ft_printf_str.c ft_printf_nbr.c \
              ft_printf_unsigned.c ft_printf_ptr.c ft_printf_x.c \
              ft_printf_x_uppercase.c ft_printf_format.c ft_printf_utils.c

SRCS = $(addprefix $(SRC_DIR), $(PRINTF_SRCS))
OBJS = $(addprefix $(OBJ_DIR), $(PRINTF_SRCS:.c=.o))
DEPS = $(OBJS:.o=.d)

NO_COLOR    = \x1b[0m
OK_COLOR    = \x1b[32;01m
WARN_COLOR    = \x1b[33;01m

$(OBJ_DIR)%.o: $(SRC_DIR)%.c Makefile
	@$(MD) $(dir $@)
	@$(CC) $(CFLAGS) -I$(INC_DIR) -MMD -MP -c $< -o $@
	@echo "$(WARN_COLOR)Compiling: $<$(NO_COLOR)"

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo "$(OK_COLOR)Printf Compiled!$(NO_COLOR)"

all: $(NAME)

clean:
	@$(RM) -r $(OBJ_DIR)
	@echo "Objects removed"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(NAME) removed"

re: fclean all

-include $(DEPS)

.PHONY: all clean fclean re