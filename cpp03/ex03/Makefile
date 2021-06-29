CC = clang++

SRCS = main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp \
		DiamondTrap.cpp

OBJS = ${SRCS:.cpp=.o}

NAME = DiamondTrap

CPPFLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98

all : ${NAME}

${NAME} : ${OBJS}
	${CC} ${CPPFLAGS} ${SRCS} -o ${NAME}

clean :
	rm -rf ${OBJS}

fclean : clean
	rm -rf ${NAME}

re : fclean all