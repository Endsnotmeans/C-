#include <iostream>
#include<cstdlib>
#include"sales.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	using namespace SALES;
	Sales sAles, saLes;
	double sale[QUARTERS] = { 128.2,253.6,73.5,532.8 };
	setSales(sAles, sale, QUARTERS);
	showSales(sAles);
	//std::cout << sizeof(sAles.sales) << std::endl;
	//std::cout << sizeof(double) << std::endl;
	std::cout << "==============================" << std::endl;
	setSales(saLes);
	showSales(saLes);
	system("pause");
	return 0; 
}

