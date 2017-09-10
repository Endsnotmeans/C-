#include<iostream>
#include<cctype>
//ctype函数包的使用

int main(){
	using namespace std;
	cout<<"Enter text for analysis,and type @"
		"to terminate input.\n";
	char ch;
	int whitespace=0;
	int digits=0;
	int chars=0;
	int punct=0;
	int others=0;
	
	cin.get(ch);
	while(ch!='@')
	{
		if(isalpha(ch))			//判断是否是字母
			chars++;
		else if(isspace(ch))	//判断是否是空格 
			whitespace++;
		else if(isdigit(ch))	//判断是否是数字0-9
			digits++;
		else if(ispunct(ch))	//判断是否是标点 
			punct++;
		else
			others++; 
		cin.get(ch);
	}
	cout<<chars<<" letters,"
		<<whitespace<<" whitespace,"
		<<digits<<" digits,"
		<<punct<<" punctuations,"
		<<others<<" others.\n";
	return 0;
} 
