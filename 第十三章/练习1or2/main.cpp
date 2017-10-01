#include <iostream>
#include<cstdlib>
#include"Cd.h"
#include<ctime>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void Bravo(const Cd& disk);
int main(int argc, char** argv) {
	Cd c1("Beatles", "Capitol", 14, 35.5);
	Classic c2 = Classic("Piano Sonata in B Flat, Fatansia in C", "Alfred Brendel", "Philips", 2, 57.17);
	Cd* pcd = &c1;
	std::cout << "Using object directly. \n";
	c1.Report();
	c2.Report();
	std::cout << "Using type Cd* pointer to object.\n";
	pcd->Report();
	pcd = &c2;
	pcd->Report();
	std::cout << "Calling a function with a Cd reference argument.\n";
	Bravo(c1);
	Bravo(c2);
	std::cout << "Testing assignment.\n";
	Classic copy;
	copy = c2;
	copy.Report();
	system("pause");
	return 0; 
	
	return 0;
}
void Bravo(const Cd & disk)
{
	disk.Report();
}
