#include <iostream>
#include"vector.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
using namespace VECTOR;
int main(int argc, char** argv) {
	Vector v(20.0,30.0,Vector::Mode (2));
	//错误
	//调用友元函数，里面有RECT 要用Vecter:: RECT
	return 0;
}
