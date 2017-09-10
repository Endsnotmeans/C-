#include<iostream>
//使用getline（）读取一行字符串，因为用cin到空格就停了 
int main()
{
	using namespace std;
	const int ArSize=20;
	char name[ArSize];
	char dessert[ArSize];
	
	cout<<"Enter your name:\n";
	cin.getline(name,ArSize);  //两个参数，一个是数组名，第二个是字符数
	//自能存ArSize-1个，要存空字符 
	cout<<"Enter your favorite dessert:\n";
	cin.getline(dessert,ArSize);
	cout<<"I have some delicious "<<dessert;
	cout<<" for you "<<name<<".\n";
	return 0; 
}
