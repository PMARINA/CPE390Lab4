all: ParameterPassing.cpp
	g++ -g3 -S $^

clean:
	rm -rf *.exe *.out *.o