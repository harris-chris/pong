#CC specifies which compiler we're using
CC = g++

#COMPILER_FLAGS specifies the additional compilation options we're using
# -w suppresses all warnings
COMPILER_FLAGS = -w --std=c++20 -g -Og

#LINKER_FLAGS specifies the libraries we're linking against
LINKER_FLAGS = -lSDL2

OBJ_NAME = pong

#This is the target that compiles our executable
$(OBJ_NAME): main.o parse_args.o init.o
	$(CC) $(OBJS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OBJ_NAME) main.o parse_args.o init.o

main.o : main.h main.cpp
	g++ -c $(COMPILER_FLAGS) main.cpp

parse_args.o : parse_args.h parse_args.cpp
	g++ -c $(COMPILER_FLAGS) parse_args.cpp

init.o : init.h init.cpp
	g++ -c $(COMPILER_FLAGS) init.cpp
