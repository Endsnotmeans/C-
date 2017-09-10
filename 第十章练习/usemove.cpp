#include <iostream>
#include"Move.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Move move1;
	Move move2(2.2, 2.3);
	move2.showMove();
	move1.reset(3.2, 3.3);
	Move move3 = move1 + move2;
	move3.showMove();
	move1.showMove();
	move1=move1.add(move2);
	move1.showMove();
	system("pause");
	return 0;
}
