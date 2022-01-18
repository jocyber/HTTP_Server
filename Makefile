FLAGS := -Wall -pedantic-errors -O2 -g
SOURCE := source_files
EXE := framework

all: server

%: $(SOURCE)/%.cpp $(SOURCE)/httpReq.cpp
	g++ $(FLAGS) $^ -o $(EXE)

run:
	./$(EXE)

clean:
	rm $(EXE)

start:
	./structure.sh

