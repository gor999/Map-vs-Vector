.PHONY:create_directories

all:compile

create_directories:
	mkdir -p bin 

compile:create_directories 
	@echo "problem solution with vectors......."
	g++ src/problem_solution_with_vector.cpp -o bin/vectors
	./bin/vectors
	@echo "problem solution with maps......."
	g++ src/problem_solution_with_maps.cpp -o bin/maps
	./bin/maps

remove:
	rm -r bin