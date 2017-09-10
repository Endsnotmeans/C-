#include <iostream>
#include"bankact.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	double cash = 20.;
	BankAccount Cat( "Schrodinger's cat","1935");
	BankAccount Dog( "Pavlov's dog","1891",126. );
	Cat.show();
	Cat.deposit(cash);
	Cat.show();
	Cat.withdraw(cash);
	Cat.show();
	
	return 0;
}
