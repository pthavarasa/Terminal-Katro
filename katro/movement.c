#include "head.h"

hole_t movePawn(int holePosition,int playerTurn, hole_t holeTable){
    int temp, count, direction,a;
    temp = -1;
    a = 0;
    if(playerTurn){
        count = holePosition;
        direction = holePosition;
        while(holeTable.player[holePosition]-a != 0){
            if(temp != -1 && holePosition <= HOLENUMBER && holePosition >= secondLineStart()){
                if(firstLineEmpty(0,holeTable)){
                    temp = holeTable.computer[HOLENUMBER-holePosition];
                    holeTable.computer[HOLENUMBER-holePosition] = 0;
                }else{
                    temp = holeTable.computer[holePosition];
                    holeTable.computer[holePosition] = 0;
                }
            }
            if(temp == -1)
                temp = 0;
            temp += holeTable.player[holePosition];
            holeTable.player[holePosition] = 0;
            while(temp>0){
				count++;
                holePosition = count%(HOLENUMBER+1);
                holeTable.player[holePosition]++;
                temp--;
            }
            a=1;
        }
    }else{
        count = holePosition;
        direction = holePosition;
        while(holeTable.computer[holePosition]-a != 0){
            if(temp != -1 && holePosition <= HOLENUMBER && holePosition >= secondLineStart()){
                if(firstLineEmpty(1,holeTable)){
                    temp = holeTable.player[HOLENUMBER-holePosition];
                    holeTable.player[HOLENUMBER-holePosition] = 0;
                }else{
                    temp = holeTable.player[holePosition];
                    holeTable.player[holePosition] = 0;
                }
            }
            if(temp == -1)
                temp = 0;
            temp += holeTable.computer[holePosition];
            holeTable.computer[holePosition] = 0;
            while(temp>0){
				count++;
                holePosition = count%(HOLENUMBER+1);
                holeTable.computer[holePosition]++;
                temp--;
            }
            a=1;
        }
    }
    return holeTable;
}
