#include <iostream>
#include<cstdlib>
#include"ImprovedStack.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Item it[5] = { 20,21,22,23,24 };
	ImprovedStack Istack;
	for (int in = 0; in < 5; in++)
		Istack.push(it[in]);
	std::cout << Istack;
	std::cout << "The size: " << Istack.Size() << std::endl;
	std::cout << "The top: " << Istack.Top() << std::endl;
	Istack.pop(it[4]);
	std::cout << Istack;
	std::cout << "The size: " << Istack.Size() << std::endl;
	std::cout << "The top: " << Istack.Top() << std::endl;
	return 0;
}
