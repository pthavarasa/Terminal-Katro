#include "head.h"

int game(){
    hole_t holeTable;
    int randomNumber,a,cp;
    a = 0;
	cp = -1;
    srand(time(NULL));
    holeTable = fillHole();
    printf("%d\n",cp);
	printTable(holeTable, addHoleTable(1,holeTable), addHoleTable(0,holeTable), cp);
    randomNumber = rand()%2;
    while(1){
        if(randomNumber){
            // player move
            printf("[Player] give the position : ");
            a = playerPositionSelect();
			while(holeEmpty(a,1,holeTable)){
				printTable(holeTable, addHoleTable(1,holeTable), addHoleTable(0,holeTable),cp);
				printf("[Player] it's empty, give an other position : ");
            	a = playerPositionSelect();
			}
            holeTable = movePawn(a,1,holeTable);
			printTable(holeTable, addHoleTable(1,holeTable), addHoleTable(0,holeTable),cp);
            if(checkWin(0,holeTable))
                return 1;
            //computer move
			cp = computerPosition(randomNumber,holeTable);
            holeTable = movePawn(cp,0,holeTable);
			printTable(holeTable, addHoleTable(1,holeTable), addHoleTable(0,holeTable),cp);
            if(checkWin(1,holeTable))
                return 0;
        }else{
            //computer move
			cp = computerPosition(randomNumber,holeTable);
            holeTable = movePawn(cp,0,holeTable);
			printTable(holeTable, addHoleTable(1,holeTable), addHoleTable(0,holeTable),cp);
            if(checkWin(1,holeTable))
                return 0;
                
            // player move
            printf("[Player] give the position : ");
            a = playerPositionSelect();
			while(holeEmpty(a,1,holeTable)){
				printTable(holeTable, addHoleTable(1,holeTable), addHoleTable(0,holeTable),cp);
				printf("[Player] it's empty, give an other position : ");
            	a = playerPositionSelect();
			}
            holeTable = movePawn(a,1,holeTable);
			printTable(holeTable, addHoleTable(1,holeTable), addHoleTable(0,holeTable),cp);
            if(checkWin(0,holeTable))
                return 1;
        }
    }
}
