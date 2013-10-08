
TARGETS= Lab1_ex1	
CC	   = g++
.PHONY: all
all: $(TARGETS)

Lab1_ex1: Lab1_ex1.cpp
			$(CC) Lab1_ex1.cpp -o Lab1_ex1

.PHONY: clean
clean:
	$(RM) $(TARGETS)

