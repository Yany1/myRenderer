
test: test.cpp line.h line.cpp tgaImage.h tgaImage.cpp
	clang++ -g -Wall -o test test.cpp tgaImage.cpp line.cpp

clean:
	rm -rf test *.o *.out *.dSYM *.tga