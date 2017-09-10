#include<iostream>
//
int main(){
	using namespace std;
	cout.setf(ios_base::fixed,ios_base::floatfield);
	//限定浮点数显示6位小数，即使后面是.30000 
	float tub=10.0/3.0;
	double mint=10.0/3.0;
	const float million=1.0e6;
	cout<<"tub= "<<tub;
	cout<<", a million tubs= "<<million *tub;
	cout<<",\nand ten million tubs= ";
	cout<< 10*million*tub<<endl;
	//float至少有6个有效位，变大之后出现了误差 
	
	cout<<"mint="<<mint<<" and a million mints= ";
	cout<<million*mint<<endl;
	//double确保15个有效位 
	return 0;
}
