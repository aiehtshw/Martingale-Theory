run: compile
	./Martingale-Theory
compile: link 
	gcc Martingale-Theory.o -o Martingale-Theory
link:
	gcc -c Martingale-Theory.c
clean:
	rm *.o
	rm Martingale-Theory