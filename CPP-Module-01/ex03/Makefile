SRC= main.cpp HumanA.cpp Weapon.cpp  HumanB.cpp
OBJ= $(SRC:.cpp=.o)
CC= c++
CFLAGS= -Wall -Wextra -Werror
NAME= Weapon

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp %.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all