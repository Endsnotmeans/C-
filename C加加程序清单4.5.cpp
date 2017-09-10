#include<iostream>
//对比4.4 get()会把用户键入的回车留在输入行 
int main()
{
	using namespace std;
	const int ArSize=20;
	char name[ArSize];
	char dessert[ArSize];
	
	cout<<"Enter your name:\n";
	cin.get(name,ArSize).get();  //所以后面要加个.get（）读取enter 
	cout<<"Enter your favorite dessert:\n";
	cin.get(dessert,ArSize).get();
	cout<<"I have some delicious "<<dessert;
	cout<<" for you "<<name<<".\n";
	return 0; 
}
