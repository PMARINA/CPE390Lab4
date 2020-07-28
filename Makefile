all: ParameterPassing.cpp funcs.s
	g++ -g3 $^

clean:
	rm -rf *.exe *.out *.o