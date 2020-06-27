#include "head.h"

hole_t fillHole(){
    int i;
    hole_t holeTable;
    for(i=0;i<=HOLENUMBER;i++){
        holeTable.player[i] = DEFAULTPAWNS;
        holeTable.computer[i] = DEFAULTPAWNS;
    }
    return holeTable;
}

int FirstLineEnd(){
	return (HOLENUMBER-1)/2;
}

int secondLineStart(){
	return (HOLENUMBER+1)/2;
}


int firstLineEmpty(int playerOrNot, hole_t holeTable){
    int i, sum;
    sum = 0;
    if(playerOrNot){
        for(i=secondLineStart();i<=HOLENUMBER;i++)
            sum += holeTable.player[i];
        return sum?0:1;
    }else{
        for(i=secondLineStart();i<=HOLENUMBER;i++)
            sum += holeTable.computer[i];
        return sum?0:1;
    }
}

int addHoleTable(int playerOrNot, hole_t holeTable){
    int i,playerPawns,computerPawns; 
	playerPawns = 0; 
	computerPawns = 0;
    for(i=0;i<=HOLENUMBER;i++){
        computerPawns += holeTable.computer[i];
        playerPawns += holeTable.player[i];
    }
    if(playerOrNot){
        return playerPawns;
    }else{
        return computerPawns;
    }
}

int holeEmpty(int holePosition, int playerOrNot, hole_t holeTable){
    if(playerOrNot){
        return (holeTable.player[holePosition])?0:1;
    }else{
        return (holeTable.computer[holePosition])?0:1;
    }
}

int checkWin(int playerOrNot, hole_t holeTable){
    int i, sum;
    sum = 0;
    if(playerOrNot){
        for(i=0;i<=HOLENUMBER;i++)
            sum += holeTable.player[i];
        return sum?0:1;
    }else{
        for(i=0;i<=HOLENUMBER;i++)
            sum += holeTable.computer[i];
        return sum?0:1;
    }
}

int positionError(char letter, int number){
	if(letter == 'C' || letter == 'D')
		if(number>=0 && number<=HOLENUMBER)
			return 0;
	return 1;
}

