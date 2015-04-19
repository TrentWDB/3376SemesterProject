planesim : MainProgram.o Runway.o Plane.o PlaneQueue.o BoolSource.o StatTracker.o
	g++ -o planesim MainProgram.o Runway.o Plane.o PlaneQueue.o BoolSource.o StatTracker.o
MainProgram.o : MainProgram.cpp Runway.h Plane.h PlaneQueue.h BoolSource.h StatTracker.h
	g++ -c MainProgram.cpp
Runway.o : Runway.cpp Runway.h
	g++ -c Runway.cpp
Plane.o : Plane.cpp Plane.h
	g++ -c Plane.cpp
PlaneQueue.o : PlaneQueue.cpp PlaneQueue.h
	g++ -c PlaneQueue.cpp
BoolSource.o : BoolSource.cpp BoolSource.h
	g++ -c BoolSource.cpp
StatTracker.o : StatTracker.cpp StatTracker.h
	g++ -c StatTracker.cpp
clean :
	rm planesim MainProgram.o Plane.o PlaneQueue.o BoolSource.o StatTracker.o 
	#Runway.h.gch Plane.h.gch PlaneQueue.h.gch BoolSource.h.gch StatTracker.h.gch 
