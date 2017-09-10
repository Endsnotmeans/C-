#include<iostream>
//浮点数没有精度。float只能表示前6或7位。此例本来结果应该是1 
int main()
{
	using namespace std;
	float a=2.34E+22f; //末尾f表示为浮点常量，F表示long double类型
	//因为程序会默认把这种数当double型 
	float b=a+1.0f;
	
	cout<<"a= "<<a<<endl;
	cout<<"b-a= "<<b-a<<endl;
	return 0;
 } 
