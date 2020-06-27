#include "head.h"

void menuPrint(){
    printf("\
|------------------------------------------------------------------------------|\n\
|                                                                              |\n\
|                                                                              |\n\
|              ##    ##    ###    ######## ########   #######                  |\n\
|              ##   ##    ## ##      ##    ##     ## ##     ##                 |\n\
|              ##  ##    ##   ##     ##    ##     ## ##     ##                 |\n\
|              #####    ##     ##    ##    ########  ##     ##                 |\n\
|              ##  ##   #########    ##    ##   ##   ##     ##                 |\n\
|              ##   ##  ##     ##    ##    ##    ##  ##     ##                 |\n\
|              ##    ## ##     ##    ##    ##     ##  #######                  |\n\
|              The Katro game is a popular game in Madagascar.                 |\n\
|                                                                              |\n\
|                                                                              |\n\
|                                                                              |\n\
|                                Play (y)                                      |\n\
|                                                                              |\n\
|                                Exit (n)                                      |\n\
|                                                                              |\n\
|                                                                              |\n\
|                                                                              |\n\
|                                                                              |\n\
|------------------------------------------------------------------------------|\n\
|------------------------------------------------------------------------------|\n");
}
/* Debug
void printHoleTable(hole_t holeTable){
    int i;
    for(i=0;i<=FirstLineEnd();i++)
        printf("%d  ",holeTable.computer[i]);
    printf("\n");
    for(i=HOLENUMBER;i>=secondLineStart();i--)
        printf("%d  ",holeTable.computer[i]);
    printf("\n");
    printf("\n");
    for(i=HOLENUMBER;i>=secondLineStart();i--)
        printf("%d  ",holeTable.player[i]);
    printf("\n");
    for(i=0;i<=FirstLineEnd();i++)
        printf("%d  ",holeTable.player[i]);
    printf("\n-------------------------\n");

}
*/

void position2Char(int holePosition){
	switch(holePosition){
		case 0:
			printf("A1");
			break;
		case 1:
			printf("A2");
			break;
		case 2:
			printf("A3");
			break;
		case 3:
			printf("A4");
			break;
		case 4:
			printf("A5");
			break;
		case 5:
			printf("B6");
			break;
		case 6:
			printf("B7");
			break;
		case 7:
			printf("B8");
			break;
		case 8:
			printf("B8");
			break;
		case 9:
			printf("B7");
			break;
		case 10:
			printf("B6");
			break;
		case 11:
			printf("B5");
			break;
		case 12:
			printf("B4");
			break;
		case 13:
			printf("B3");
			break;
		case 14:
			printf("B2");
			break;
		case 15:
			printf("B1");
			break;
		default:
			printf("--");
			break;
	}
}

void printTable(hole_t holeTable, int playerPawns, int computerPawns, int holeposition){
	int i;
	printf("|------------------------------------------------------------------------------|\n\
|                                                                              |\n\
|                                                                              |\n\
|                                                                              |\n\
|                                                                              |\n\
|                      1    2    3    4    5    6    7    8                    |\n\
|                   |---------------------------------------|                  |\n\
|                 A |");
	for(i=0;i<=FirstLineEnd();i++){
        printf(" ");
		(holeTable.computer[i]<10)?printf("0%d",holeTable.computer[i]):printf("%d",holeTable.computer[i]);
		printf(" |");
	}
	printf("                  |\n\
|                   |---------------------------------------|                  |\n\
|                 B |");
	for(i=HOLENUMBER;i>=secondLineStart();i--){
        printf(" ");
		(holeTable.computer[i]<10)?printf("0%d",holeTable.computer[i]):printf("%d",holeTable.computer[i]);
		printf(" |");
	}
	printf("                  |\n\
|                   |---------------------------------------|                  |\n\
|                   |---------------------------------------|                  |\n\
|                 C |");
	for(i=HOLENUMBER;i>=secondLineStart();i--){
        printf(" ");
		(holeTable.player[i]<10)?printf("0%d",holeTable.player[i]):printf("%d",holeTable.player[i]);
		printf(" |");
	}
	printf("                  |\n\
|                   |---------------------------------------|                  |\n\
|                 D |");
	for(i=0;i<=FirstLineEnd();i++){
        printf(" ");
		(holeTable.player[i]<10)?printf("0%d",holeTable.player[i]):printf("%d",holeTable.player[i]);
		printf(" |");
	}
	printf("                  |\n\
|                   |---------------------------------------|                  |\n\
|                                                                              |\n\
|          Player Pawns : ");
	(playerPawns<10)?printf("0%d",playerPawns):printf("%d",playerPawns);
	printf("                        ");
	(computerPawns<10)?printf("0%d",computerPawns):printf("%d",computerPawns);
	printf(" : Computer Pawns        |\n\
|                               Computer choosed                               |\n\
|                                      ");
	position2Char(holeposition);
	printf("                                      |\n\
|                                                                              |\n\
|------------------------------------------------------------------------------|\n\
|------------------------------------------------------------------------------|\n");
}

