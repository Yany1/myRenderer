
tga: tga.cpp tgaImage.h tgaImage.cpp
	clang++ -g -Wall -o tga tga.cpp tgaImage.cpp

clean:
	rm -rf tga *.o *.out *.dSYM *.tga
# 
# tga.o: tga.cpp tgaImage.h tgaImage.cpp
# 	clang++ -g -Wall -c -o tga.o tga.c