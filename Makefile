all: build run clean
build: lab4z1v30.c lab4z2v30.c MainFile.c
	gcc -Wall -O0 -g3 -DDEBUG -pedantic-errors -std=c89 lab4z1v30.c lab4z2v30.c MainFile.c -o programm
	
run: programm.exe
	./programm.exe
	
clean: 
	rm -rf *.o programm