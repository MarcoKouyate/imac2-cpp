EXE = Exam_mkouyate
LDFLAGS = 
CFLAGS  = -Wall -std=c++11
all: ${EXE}

${EXE}: Main.o Vehicule.o Voiture.o Bus.o
	@echo linking ${EXE} 
	@g++ ${LDFLAGS} -o ${EXE} $^

Main.o: Main.cpp Vehicule.hpp Voiture.cpp Voiture.hpp Bus.hpp Bus.cpp
	@echo compiling $@ 
	@g++ ${CFLAGS} -c $< -o $@

Vehicule.o: Vehicule.cpp Vehicule.hpp Voiture.cpp Voiture.hpp Bus.hpp Bus.cpp
	@echo compiling $@ 
	@g++ ${CFLAGS} -c $< -o $@

.PHONY: clean

clean :
	@echo cleaning
	@rm -Rf *.o
