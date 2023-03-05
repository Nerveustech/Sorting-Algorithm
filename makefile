CC = gcc
C_FLAGS = -c


bubble_sort.o: src/Bubble_Sort/bubble_sort.c src/Bubble_Sort/bubble_sort.h
	@echo "Compiling bubble_sort.c"
	$(CC) $(C_FLAGS) src/Bubble_Sort/bubble_sort.c -o src/obj/bubble_sort.o

bubble_sort_test.o: test/bubble_sort_test.c
	@echo "Compiling bubble_sort_test.c"
	$(CC) $(C_FLAGS) test/bubble_sort_test.c -o test/obj/bubble_sort_test.o

clean:
	@echo "Cleaning"
	rm -rf src/obj/*.o
	rm -rf test/obj/*.o
	rm -rf test/bin/*

build_and_test: bubble_sort.o bubble_sort_test.o
	@echo "Linking bubble_sort.o to bubble_sort_test"
	$(CC) src/obj/bubble_sort.o test/obj/bubble_sort_test.o  -o test/bin/bubble_sort_test

	@echo "Testing All Algorithms"
	./test/bin/bubble_sort_test