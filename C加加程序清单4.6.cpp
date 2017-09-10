#include<iostream>
//混合输入字符串和数字
//通常使用指针而不是数组处理字符串- -！ 
int main()
{
	using namespace std;
	cout<<"What year was your house built?\n";
	int year;
	cin>>year;
	cin.get();   //如果不加这句读取空行，后面的getline（）就会读取空行造成错误
	//或者这么写 (cin>>year).get(),把两句拼接 
	cout<<"What is its street address?\n";
	char address[80];
	cin.getline(address,80);
	cout<<"Year built: "<<year<<endl;
	cout<<"Address: "<<address<<endl;
	cout<<"Done!\n";
	return 0;	
}
