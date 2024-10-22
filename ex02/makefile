NAME = Bureaucrat
SRCS = main.cpp Bureaucrat.cpp AForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp PresidentialPardonForm.cpp
OBJS = $(SRCS:.cpp=.o)
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
DIR = .build
INC = Bureaucrat.hpp 
OBJS := $(addprefix $(DIR)/, $(OBJS))
HEADER = AForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp PresidentialPardonForm.hpp


all: $(NAME)

$(NAME): $(DIR) $(OBJS)
		$(CC) $(FLAGS) $(OBJS) -o $(NAME)

$(DIR)/%.o: %.cpp $(INC) $(HEADER)
		$(CC) $(FLAGS) -c $< -o $@

$(DIR):
		mkdir -p $(DIR)

clean:
		rm -fr $(DIR)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re⏎    