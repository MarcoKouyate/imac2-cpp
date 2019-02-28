EXE = TP7_exercice
LDFLAGS = 
CFLAGS  = -Wall -std=c++11
all: ${EXE}

${EXE}: Main.o 
	@echo linking ${EXE} 
	@g++ ${LDFLAGS} -o ${EXE} $^

Main.o: Main.cpp 
	@echo compiling $@ 
	@g++ ${CFLAGS} -c $< -o $@




.PHONY: clean

clean :
	@echo cleaning
	@rm -Rf *.o
