#include <iostream>
#include"plorg.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Plorg plorg1;
	Plorg plorg2("Fick", 50);
	plorg1.PlorgShow();
	plorg2.PlorgShow();
	plorg2.PlorgReset(40);
	plorg2.PlorgShow();
	return 0;
}
