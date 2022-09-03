NAME = weapon

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp\
		Weapon.cpp\
		HumanA.cpp\
		HumanB.cpp

OBJS = $(SRC:.c=.o)


all: $(NAME)

$(OBJSFD):
	@mkdir $@
	@echo "objs/ directory"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$@ object"

$(NAME): project $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $@
	@echo "$(NAME) executable"

project:
	@echo "Checking project..."

clean:
	@rm -rf $(OBJSFD)

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "executable deleted"

re: fclean all

.PHONY: all project clean fclean re