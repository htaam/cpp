NAME = megaphone

CC = clang++

CFLAGS = -Wall -Wextra -Werror

SRC = megaphone.cpp
OBJS = $(SRC:.c=.o)

RED = \033[0;31m
GREEN = \033[0;32m
NONE = \033[0m


all: $(NAME)

$(OBJSFD):
	@mkdir $@
	@echo "\t[ $(GREEN)✔$(NONE) ] objs/ directory"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "\t[ $(GREEN)✔$(NONE) ] $@ object"

$(NAME): project $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $@
	@echo "\t[ \033[0;32m✔\033[0m ] megaphone executable"

project:
	@echo "Checking project..."

clean:
	@rm -rf $(OBJSFD)

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "\t[ $(RED)✗$(NONE) ] $(NAME) executable"

re: fclean all

.PHONY: all project clean fclean re