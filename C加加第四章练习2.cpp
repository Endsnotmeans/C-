#include<iostream>
#include<string> 
//使用getline（）读取一行字符串，因为用cin到空格就停了 
int main()
{
	using namespace std;
	
	string name;
	string dessert;
	
	cout<<"Enter your name:\n";
	getline(cin,name);  
	cout<<"Enter your favorite dessert:\n";
	getline(cin,dessert);
	cout<<"I have some delicious "<<dessert;
	cout<<" for you "<<name<<".\n";
	return 0; 
}
