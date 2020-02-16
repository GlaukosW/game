objects = main.o map.o

game: $(objects)
	cc -o game $(objects)

main.o: main.c common.h
	cc -c main.c

map.o: map.c common.h
	cc -c map.c

.PHONY: clean
clean:
	rm $(objects) game
