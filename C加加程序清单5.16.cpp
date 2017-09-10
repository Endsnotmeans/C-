#include<iostream>
//循环和文本输入 
int main()
{
	using namespace std;
	char ch;
	int count=0;
	cout<<"Enter characters;enter # to quit :\n";
	cin>>ch;	//循环前先输入，防止第一个字符就是#
	while(ch!='#')
	{
		cout<<ch;
		++count;  //初始值是1 
		cin>>ch;	//cin的问题，1，忽略空格和换行符，
		//2只有用户按回车，才发送给程序，#号后还能继续输
		//cin>>ch改成cin.get（ch）可以解决空格不输入的问题	
	} 
	cout<<endl<<count<<" characters read\n";
}
