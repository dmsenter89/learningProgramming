CXXFLAGS = -std=c++0x -fdiagnostics-color=auto
obj = functs.o fmain.o

my_prog : $(obj)
	$(CXX) $(CXXFLAGS) $(obj)

fmain.o : fmain.cpp functs.h

functs.o : functs.cpp functs.h

clean:
	rm -f *.o
