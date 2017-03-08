all: projekt
	
projekt: main.o funkcja1.o funkcja2.o
	g++ main.o funkcja1.o funkcja2.o -o projekt

main.o: main.cpp Naglowek1.h Naglowek2.h
	g++ -c main.cpp

funkcja1.o: funkcja1.cpp Naglowek1.h
	g++ -c funkcja1.cpp

funkcja2.o: funkcja2.cpp Naglowek2.h
	g++ -c funkcja2.cpp

clean:
	rm  *o hello
