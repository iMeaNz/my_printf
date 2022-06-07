##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC = src/flags.c \
	  src/my_printf.c \
	  src/my_put_pointer.c \
	  src/my_put_printable_str.c \
	  src/stack.c \
	  src/utils_alloc.c \
	  src/utils_flag.c \
	  src/utils_misc.c \
	  src/utils_print.c \
	  src/utils_stack.c \
	  src/utils_str.c \
	  src/my_getnbr.c \
	  src/my_put_nbr_base_str.c \
	  src/sort_stack.c \
	  src/stack_field_width.c \
	  src/utils_deleting_node.c \
	  src/utils_str_2.c \
	  src/compute_percent.c \
	  src/compute_stack.c \
	  src/handle_bases.c \
	  src/utils_stack_2.c \
	  src/utils_stack_3.c \
	  src/blank.c \
	  src/positive.c \
	  src/neg.c \
	  src/zero.c

OBJ = $(SRC:.c=.o)

NAME = libmy.a

INCLUDE = include

LIB = lib/my

TEST_FILES = tests/tests_decimal.c \
	  		 src/my_printf.c \
	  		 src/my_put_pointer.c \
	  		 src/my_put_printable_str.c \
	  		 src/stack.c \
	  		 src/utils_alloc.c \
	  		 src/utils_flag.c \
	  		 src/utils_misc.c \
	  		 src/utils_print.c \
	  		 src/utils_stack.c \
	  		 src/utils_str.c \
	  		 src/my_getnbr.c \
	  		 src/my_put_nbr_base_str.c \
	  		 src/sort_stack.c \
	  		 src/stack_field_width.c \
	  		 src/utils_deleting_node.c \
	  		 src/utils_str_2.c \
	  		 src/compute_percent.c \
	  		 src/compute_stack.c \
	  		 src/handle_bases.c \
			 src/flags.c \
			 src/utils_stack_2.c \
			 src/utils_stack_3.c \
			 src/blank.c \
			 src/positive.c \
			 src/neg.c \
			 src/zero.c

CFLAGS = -I$(INCLUDE) -Wall -Wextra -g

all: $(NAME)

$(NAME): $(OBJ)
		  ar -rcs $(NAME) $(OBJ)

clean:
	   rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

tests_run: fclean make_lib
		   gcc -I$(INCLUDE) -o unit_tests $(TEST_FILES)\
		   --coverage -lcriterion
		   ./unit_tests

.PHONY: fclean all debug re clean tests_run make_lib $(NAME)
