#include <iostream>
#include<cstdlib>
#include"cow.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Cow cow("Schrodinger's cat", "Die or live", 20);
	cow.showCow();
	Cow cat = cow;          //���� 
	cat.showCow();
	Cow dog = Cow(cat);		//���� 
	Cow horse;
	//horse.showCow(); ��һ��������쳣����Ϊ��ʱhobby�Ǹ���ָ��nullptr
	dog.showCow();
	horse = cat;			//���Ǹ��� 
	horse.showCow();
	return 0;
}
