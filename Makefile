
TARGETS= Lab1_ex1 Lab1_ex2 Lab1_ex3
CC	   = g++
.PHONY: all
all: $(TARGETS)

Lab1_ex1: Lab1_ex1.cpp
			$(CC) Lab1_ex1.cpp -o Lab1_ex1
Lab1_ex2: Lab1_ex2.cpp
			$(CC) Lab1_ex2.cpp -o Lab1_ex2
Lab1_ex3: Lab1_ex3.cpp
			$(CC) Lab1_ex3.cpp -o Lab1_ex3

.PHONY: clean
clean:
	$(RM) $(TARGETS)

