#include<iostream>
using namespace std;
//Êä³öËÄ¾ä»° 
void f1(void);
void f2(void);

int main()
{
	f1();
	f1();
	f2();
	f2();
	return 0;
}

void f1(void){
	cout<<"Three blind mice"<<endl;
}
void f2(void){
	cout<<"See how they run"<<endl;
}
