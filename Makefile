all: ex1 ex2 ex3

ex1: ex1.c
	gcc ex1.c -o ex1
ex2: ex2.c
	gcc ex2.c -o ex2

ex3: ex3.c
	gcc ex3.c -o ex3

.PHONY: all
