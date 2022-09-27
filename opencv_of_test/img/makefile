tu: tu.o
	 g++ -o tu tu.o  `pkg-config --cflags --libs opencv`
tu.o: tu.cpp
	g++ -c -o tu.o tu.cpp
.PHONY:clean
clean:
	rm -f tu tu.o
