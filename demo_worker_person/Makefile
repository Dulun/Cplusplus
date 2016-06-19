main:main.o Worker.o Person.o
	g++ main.o Worker.o Person.o -o main
main.o:main.cpp Worker.h
	g++ -c main.cpp
Worker.o:Worker.cpp Person.h
	g++ -c Worker.cpp
Person.o:Person.cpp
	g++ -c Person.cpp
clean:
	-rm -f *.o

