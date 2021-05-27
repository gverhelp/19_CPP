CC = clang++

SRCS = megaphone.cpp

OBJS = ${SRCS:.cpp=.o}

NAME = megaphone

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all : ${NAME}

${NAME} : ${OBJS}
	${CC} ${CPPFLAGS} ${SRCS} -o ${NAME}

clean :
	rm -rf ${OBJS}

fclean : clean
	rm -rf ${NAME}

re : fclean all

test : all
	@echo "Test 1 :\n"
	./megaphone "shhhhh... I think the students are asleep..."
	@echo "\nTest 2 :\n"
	./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
	@echo "\nTest 3 :\n"
	./megaphone
