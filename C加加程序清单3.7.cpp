#include<iostream>
//转义符使用 
int main(){
	using namespace std;
	cout<<"\aOperation \"HyperHype\" is now activated!\n";
	// /a 是振铃符，滴 
	cout<<"Enter your agent code:________\b\b\b\b\b\b\b\b";
	// /b 是退格附 
	long code;
	cin>>code;
	cout<<"\aYou entered "<< code<<"...\n";
	cout<<" \aCode vecified! Proceed with Plan Z3!\n";
	return 0;
} 

