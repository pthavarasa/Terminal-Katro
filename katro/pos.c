#include "head.h"

int findBestPosition(int playerOrNot, hole_t holeTable){
    int i, best, best2, val;
    best = 0;
    val = 0;
    while(holeEmpty(val,playerOrNot,holeTable)){
        val++;
    }
    best = addHoleTable(playerOrNot, movePawn(val, playerOrNot, holeTable));
    for(i=val+1;i<=HOLENUMBER;i++){
        best2 = addHoleTable(playerOrNot, movePawn(i,playerOrNot,holeTable));
        if(best < best2){
            val = i;
            best = best2;
        }
    }
    return val;
}

int findBestPositionValue(int playerOrNot, hole_t holeTable){
    int i, best, best2, val;
    best = 0;
    val = 0;
    while(holeEmpty(val,playerOrNot,holeTable)){
        val++;
    }
    best = addHoleTable(playerOrNot, movePawn(val, playerOrNot, holeTable));
    for(i=val+1;i<=HOLENUMBER;i++){
        best2 = addHoleTable(playerOrNot, movePawn(i,playerOrNot,holeTable));
        if(best < best2){
            val = i;
            best = best2;
        }
    }
    return best;
}

int findSupperPosition(int playerOrNot, hole_t holeTable){
    int i,stock,stock2,val;
    val = 0;
    hole_t tempHoleTable;
    while(holeEmpty(val,playerOrNot,holeTable)){
        val++;
    }
    tempHoleTable=movePawn(val, playerOrNot, holeTable);
    stock=findBestPositionValue(!playerOrNot,tempHoleTable);
    for(i=val;i<=HOLENUMBER;i++){
        tempHoleTable=movePawn(i, playerOrNot, holeTable);
        stock2=findBestPositionValue(!playerOrNot,tempHoleTable);
        if(stock>stock2){
            val = i;
            stock = stock2;
        }
    }
    return val;

}

int computerPosition(int whoStart, hole_t holeTable){
    if(whoStart){
        return findSupperPosition(0,holeTable);
    }else{
        return findBestPosition(0,holeTable);
    }
}

int playerPositionSelect(){
	char letter;
	int number;
	scanf(" %c",&letter);
	scanf(" %d",&number);
	while(positionError(letter,number)){
		printf("Try to give the correct position : ");
		scanf(" %c",&letter);
		scanf(" %d",&number);
	}
	if(letter == 'C'){
		switch(number){
			case 1:
				return 15;
			case 2:
				return 14;
			case 3:
				return 13;
			case 4:
				return 12;
			case 5:
				return 11;
			case 6:
				return 10;
			case 7:
				return 9;
			case 8:
				return 8;
		}
			
	}else{
		switch(number){
			case 1:
				return 0;
			case 2:
				return 1;
			case 3:
				return 2;
			case 4:
				return 3;
			case 5:
				return 4;
			case 6:
				return 5;
			case 7:
				return 6;
			case 8:
				return 7;
		}
	}
	
	
}

