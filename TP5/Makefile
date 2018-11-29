EXE = image
LDFLAGS = 
CFLAGS  = -Wall -std=c++11
all: ${EXE}

${EXE}: main.o ImageRGBU8.o ioPPM.o Filters.o Filter.o Threshold.o RemoveChannel.o
	@echo linking ${EXE} 
	@g++ ${LDFLAGS} -o ${EXE} $^

main.o: main.cpp ImageRGBU8.hpp ioPPM.hpp Filter.hpp Threshold.hpp RemoveChannel.hpp
	@echo compiling $@ 
	@g++ ${CFLAGS} -c $< -o $@

ImageRGBU8.o: ImageRGBU8.cpp ImageRGBU8.hpp
	@echo compiling $@ 
	@g++ ${CFLAGS} -c $< -o $@

ioPPM.o: ioPPM.cpp ioPPM.hpp ImageRGBU8.hpp
	@echo compiling $@ 
	@g++ ${CFLAGS} -c $< -o $@

Filters.o: Filters.cpp Filters.hpp Filter.hpp
	@echo compiling $@ 
	@g++ ${CFLAGS} -c $< -o $@

Filter.o: Filter.cpp Filter.hpp ImageRGBU8.hpp
	@echo compiling $@ 
	@g++ ${CFLAGS} -c $< -o $@

Threshold.o: Threshold.cpp Threshold.hpp Filter.hpp
	@echo compiling $@ 
	@g++ ${CFLAGS} -c $< -o $@		

RemoveChannel.o: RemoveChannel.cpp RemoveChannel.hpp Filter.hpp
	@echo compiling $@ 
	@g++ ${CFLAGS} -c $< -o $@			

.PHONY: clean

clean :
	@echo cleaning
	@rm -Rf *.o
