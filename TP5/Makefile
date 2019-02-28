EXE = TP5_exercice
LDFLAGS = 
CFLAGS  = -Wall -std=c++11
all: ${EXE}

${EXE}: Main.o Rectangle.o Carre.o
	@echo linking ${EXE} 
	@g++ ${LDFLAGS} -o ${EXE} $^

Main.o: Main.cpp Rectangle.hpp Carre.hpp 
	@echo compiling $@ 
	@g++ ${CFLAGS} -c $< -o $@

Rectangle.o: Rectangle.cpp Rectangle.hpp Carre.cpp Carre.hpp
	@echo compiling $@ 
	@g++ ${CFLAGS} -c $< -o $@

.PHONY: clean

clean :
	@echo cleaning
	@rm -Rf *.o
