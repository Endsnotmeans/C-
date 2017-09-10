#include <iostream>
#include<cstdlib>
#include"sales.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	using SALES::Sales;
	double vals[3] = {2000, 3000, 5000};
    Sales forFiji(vals, 3);
    forFiji.showSales();
    
    Sales red;
    red.showSales();
    red.setSales();
    red.showSales();
	
	return 0; 
}

