EXE = image
LDFLAGS = 
CFLAGS  = -Wall -std=c++11
all: ${EXE}

${EXE}: main.o ImagesRGBU8.o ioPPM.o
	@echo linking ${EXE} 
	@g++ ${LDFLAGS} -o ${EXE} $^

main.o: main.cpp ImagesRGBU8.hpp ioPPM.hpp
	@echo compiling $@ 
	@g++ ${CFLAGS} -c $< -o $@

ImagesRGBU8.o: ImagesRGBU8.cpp ImagesRGBU8.hpp
	@echo compiling $@ 
	@g++ ${CFLAGS} -c $< -o $@

ioPPM.o: ioPPM.cpp ioPPM.hpp ImagesRGBU8.hpp
	@echo compiling $@ 
	@g++ ${CFLAGS} -c $< -o $@

.PHONY: clean

clean :
	@echo cleaning
	@rm -Rf *.o
