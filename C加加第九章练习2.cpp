#include<iostream>
#include<cstring>
using namespace std;
const int ArSize=10;
void strcount(const string str);

int main()
{
	
	string input;
	char next;
	
	cout<<"Enter a line: \n";
	getline(cin,input);   
	while(input.size())				//还可以用strcmp和“”比较排除空行 
	{
			strcount(input);
			cout<<"Enter next line(empty line to quit):\n";
			getline(cin,input);;
	}
		cout<<"Bye\n";
		return 0; 
 } 
 void strcount(const string str)
 {
 	using namespace std;
 	static int total=0;
 	int count=0;
 	
 	cout<<"\""<<str<<"\" contains ";
 	count=str.size();				//用string对象后，*str++不行了 
 	total+=count;
 	cout<<count<<" characters\n";
 	cout<<total<<" characters total\n";
 }
