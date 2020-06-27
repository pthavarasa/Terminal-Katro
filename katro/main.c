#include "head.h"

int main(){
    int a;
	char y;
	menuPrint();
	scanf(" %c",&y);
	if(y=='y'){
		a = game();
    	if(a){printf("player win\n");}else{printf("computer win\n");}
	}
}
