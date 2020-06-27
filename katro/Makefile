# main.c : starting the game
# head.h : all functions, define, include, struct, typedef
# game.c : game loop function
# pos.c : computer position finder functions
# movement.c : moving the pawns function
# print.c : all display functions
# func.c : all other nessasary functions

CC=gcc

build:	main.o game.o pos.o func.o movement.o print.o head.h
	$(CC) main.o game.o pos.o func.o movement.o print.o -o game

main.o:	main.c head.h

game.o:	game.c head.h

pos.o:	pos.c head.h

func.o:	func.c head.h

movement.o:	movement.c head.h

print.o:	print.c head.h

clear:
	@rm -f *.o
	@rm -f core
	@rm -f *~

allclear:	clear
	@rm -f game

tar:
	@tar -czvf jeukatro.tgz ./
