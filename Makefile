all:pr0 

pr0main.o: pr0main.cpp pr0main.h
	g++ -c pr0main.cpp
pr0.0:pr0.cpp pr0main.h
	g++ -c pr0.cpp
pr0:pr0.o pr0main.o
	g++ -o pr0 pr0.o pr0main.o
clean:
	rm -f *.o pr0
test: all
	./pr0