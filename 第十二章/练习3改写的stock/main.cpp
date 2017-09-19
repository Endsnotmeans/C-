#include <iostream>
#include<cstdlib>
#include"ImprovedStock.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	const int STKS = 4;
	ImprovedStock Stocks[STKS] = { ImprovedStock("Nano Smart",12,20.0),
		ImprovedStock("Boffo Objects",200,2.0),
		ImprovedStock("Monolithics Obelisks",130,3.25),
		ImprovedStock("Fleep Enterprises",60,6.5),
	};
	std::cout << "Stocks holding: \n";
	int st;
	for (st = 0; st < STKS; st++)
		std::cout << Stocks[st];
	const ImprovedStock* top = &Stocks[0];
	for (st = 1; st < STKS; st++)
		top = &top->topval(Stocks[st]);
	std::cout << "Most valuable holding: \n";
	std::cout << *top << "\n";
	system("pause");
	return 0;
}
