#include<iostream>
#include<string>
#include<cstring>
// 
int main()
{
	using namespace std;
	char charr[20];
	string str;
	cout<<"Length of string in charr before input: "
	<<strlen(charr)<<endl;    //从头计算到空字符的字节数，
	//在未初始化之前可能得到大于数组长度的值 
	cout<<"Length of string in str before input: "
	<<str.size() <<endl;
	cout<<"Enter a line of text:\n";
	cin.getline(charr,20);
	cout<<"You entered: "<<charr<<endl;
	cout<<"Enter another line of text:\n";
	getline(cin,str);
	//引入istream类方法之前的方法，把cin当参数，string对象自动调整大小 
	cout <<"You entered: "<<str<<endl;
	cout<<"Length of string in charr after input: "
	<<strlen(charr)<<endl;
	cout<<"Length of string in str after input: "
	<<str.size() <<endl;
	
	return 0;
 } 
