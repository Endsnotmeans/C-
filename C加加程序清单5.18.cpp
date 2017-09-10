#include<iostream>
//文件尾条件 EOF
//这是每次读取一个字符，知道遇到EOF的常见做法 
int main()
{
	using namespace std;
	char ch;
	int count=0;
//	cin.get(ch);
//	while(cin.fail()==false )   //test for EOF
//	//还可以用while（！cin。fail（）） 
//	{
//		cout<<ch;
//		++count;
//		cin.get(ch);
//	}
	//第二种方法，把cin.get（ch）的返回值cin对象，转化为bool值 
	while(cin.get(ch))
	{
		cout<<ch;
		++count;
	}
	cout<<endl<<count<<" characters read\n";
	return 0;
	//用ctrl+z来模拟EOF条件 
 } 
