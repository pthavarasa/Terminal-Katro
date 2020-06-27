#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define HOLENUMBER 15
#define DEFAULTPAWNS 2

struct hole {
    int player[HOLENUMBER+1];
    int computer[HOLENUMBER+1];
};
typedef struct hole hole_t;

hole_t fillHole(); // filling the hole by 2 pawns each
int FirstLineEnd(); // return the last first line value (ex : for 15 return 7)
int secondLineStart(); // return the first second line value (ex : for 15 return 8)
void menuPrint(); // print start game display
void position2Char(int); // print the position to user (ex : C1, D4 ect)
void printTable(hole_t, int, int, int); // print game display (input : table, player pawn total, computer pawn total, computer move position)
int firstLineEmpty(int, hole_t); // check if first is empty (input : who, hole table) and return (empty)?1:0
hole_t movePawn(int, int, hole_t); // make moivng the pawns, (input : which position start, who play, holetable) and return the hole table
int addHoleTable(int, hole_t); // addint the all pawns in the table, (input : who, table) and return pawns total have each one
int holeEmpty(int, int, hole_t); // check if the specific hole is empty, (input : position, who, table) and return (empty)?1:0
int findBestPosition(int, hole_t); // (input : who, table) return position
int findBestPositionValue(int, hole_t); // (input : who, table) return position
int findSupperPosition(int, hole_t); // (input : who, table) return position
int computerPosition(int, hole_t); // final decision, (input : who, table) return position
int checkWin(int, hole_t); // check if players section is empty, (input : who, table) return (empty)?1:0 
int positionError(char, int); // check if player give the correct position, (input : verticl letter, horizontal number) and return (error)?1:0
int playerPositionSelect(); // return player position (ex : C1, D5 ect)
int game(); // initialisation, game loop, error msg, manage input output.
