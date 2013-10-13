
TARGETS= Lab1_ex1 Lab1_ex2 Lab1_ex3  test_creature
CC	   = g++
.PHONY: all
all: $(TARGETS)

Lab1_ex1: Lab1_ex1.cpp
			$(CC) Lab1_ex1.cpp -o Lab1_ex1
Lab1_ex2: Lab1_ex2.cpp
			$(CC) Lab1_ex2.cpp -o Lab1_ex2
Lab1_ex3: Lab1_ex3.cpp
			$(CC) Lab1_ex3.cpp -o Lab1_ex3
test_creature : test_creature.o creatures.o
			$(CC) test_creature.o creatures.o -o test_creature

#update it when header is changed as well.
creatures.o : creatures.cpp creatures.h
			$(CC) -c creatures.cpp

test_creature.o: test_creature.cpp  
			$(CC) -c test_creature.cpp 

.PHONY: clean
clean:
	$(RM) $(TARGETS)

