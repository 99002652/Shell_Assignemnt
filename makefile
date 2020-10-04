all: all.out
all.out : gcomplex_test.o gcomplex.o
	g++ $^ -o $@ -lgtest -lgtest_main -lpthread
gcomplex_test.o: gcomplex_test.cpp gcomplex.h gcomplex.cpp 
	g++ $< -c
gcomplex.o: gcomplex.cpp gcomplex.h
	g++ $< -c
clean:
	rm -rf *.o *.out
