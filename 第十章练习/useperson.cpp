#include <iostream>
#include"Person.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	using std::cout;
	using std::endl;
	Person one;
	Person two("Smythecraft");
	Person three("Dimwiddy", "Sam");
	one.show();
	one.FormalShow();
	two.show();
	two.FormalShow();
	three.show();
	three.FormalShow();
	one = two + three;
	one.show();
	one.FormalShow();
	return 0; 
}
