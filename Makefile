
TARGETS= Lab1_ex1 Lab1_ex2	
CC	   = g++
.PHONY: all
all: $(TARGETS)

Lab1_ex1: Lab1_ex1.cpp
			$(CC) Lab1_ex1.cpp -o Lab1_ex1
Lab1_ex2: Lab1_ex2.cpp
			$(CC) Lab1_ex2.cpp -o Lab1_ex2


.PHONY: clean
clean:
	$(RM) $(TARGETS)

