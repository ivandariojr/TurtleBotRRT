CC = g++ -std=c++0x
FLAGS = -Wall -g -O0
LIBS = /usr/include/eigen3
SOURCE = Map.cpp
OUT = Map.o

All:
	$(CC) $(SOURCE) -o $(OUT) -I $(LIBS) $(FLAGS)
