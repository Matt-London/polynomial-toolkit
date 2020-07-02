Main: buildAlert folderDepend build/Main.o build/Quadratic.o build/Coordinate.o
	gcc build/* -o bin/Main

build/Main.o: src/Main.c
	gcc -c src/Main.c -o build/Main.o

buildAlert:
	@echo "🚧 Building..."

build/Quadratic.o: src/struct/Quadratic.c include/struct/Quadratic.h
	gcc -c src/struct/Quadratic.c -o build/Quadratic.o

build/Coordinate.o: src/struct/Coordinate.c include/struct/Coordinate.h
	gcc -c src/struct/Coordinate.c -o build/Coordinate.o

run: Main clean
	@echo "🚀 Executing..."
	@echo ""
	@./bin/Main

clean:
	@echo "🧹 Cleaning..."
	rm build/*.o


folderDepend:
	@if ! [[ -d "build/" ]]; then mkdir build; fi
	@if ! [[ -d "bin/" ]]; then mkdir bin; fi


