#include<iostream>
#define ZERO 0
#include<climits>  //包含INT_MAX等常量
int main()
{	//unsigned变量，无符号变量，没有负数，最大值大了一倍 
	using namespace std;
	short sam=SHRT_MAX;
	unsigned short sue=sam;
	
	cout<<"Sam has "<<sam<<" dollars and Sue has "<<sue;
	cout<<" dollars deposited."<<endl
	<<"Add $1 to each account."<<endl<<"Now ";
	sam=sam+1;
	sue=sue+1;
	cout<<"Sam has "<<sam<<" dollars and Sue has "<<sue;
	cout<<" dollars deposited. \nPoor Sam!"<<endl;
	sam=ZERO;
	sue=ZERO;
	cout<<"Sam has "<<sam<<" dollars and Sue has "<<sue;
	cout<<" dollars deposited."<<endl;
	cout<<"Take $1 from each account."<<endl<<"Now ";
	sam=sam-1;
	sue=sue-1;
	cout<<"Sam has "<<sam<<" dollars and Sue has "<<sue;
	cout<<" dollars deposited."<<endl<<"Lucky Sue!"<<endl;
	return 0;
	
 } 
