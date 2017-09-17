#include <iostream>
#include<cstdlib>
#include"cow.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Cow cow("Schrodinger's cat", "Die or live", 20);
	cow.showCow();
	Cow cat = cow;          //复制 
	cat.showCow();
	Cow dog = Cow(cat);		//复制 
	Cow horse;
	//horse.showCow(); 这一句会引发异常，因为此时hobby是个空指针nullptr
	dog.showCow();
	horse = cat;			//还是复制 
	horse.showCow();
	return 0;
}
