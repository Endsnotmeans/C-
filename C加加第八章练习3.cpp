#include<iostream>
#include<cstring> 
#include<cctype>   //toupper() 
using namespace std;
//str.at(i) str.size() ÓÃ·¨ 
void upper(string& str);
int main()
{
	string str;
	cout<<"Enter a string(q to quit): ";
	while(getline(cin,str)&&str.at(0)!='q'&&str.size()!=1)
	{
		upper(str);
		cout<<str<<endl;
		cout<<"Next string(q to quit): ";
	}
	cout<<"Bye."<<endl;
	return 0;
}
void upper(string& str)
{
	for(int i=0;i<str.size();i++)
		if(islower(str.at(i)))
			str.at(i)=toupper(str.at(i));
}
