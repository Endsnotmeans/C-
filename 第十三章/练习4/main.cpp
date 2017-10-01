#include <iostream>
#include"Port.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Port po("Gallo", "tawny", 20);
	Port po1("Gillo", "Tiwaoy", 21);
	po.show();
	cout << po << endl;
	VintagePort vp("Gallo", "tawny", 20, "Old Gallo", 10);
	VintagePort vp1(vp);
	vp.show();
	vp1.show();
	po1.show();
	cout << vp1 << endl;
	po += 15;
	po.show();
	po1 = vp1;
	po1.show();
	po1 -= 10;
	po1.show();
	cout << "Port Bottle count: " << po1.BottleCount() << endl;
	return 0;
}
