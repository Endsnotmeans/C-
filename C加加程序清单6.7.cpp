#include<iostream>
#include<cctype>
//ctype��������ʹ��

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
		if(isalpha(ch))			//�ж��Ƿ�����ĸ
			chars++;
		else if(isspace(ch))	//�ж��Ƿ��ǿո� 
			whitespace++;
		else if(isdigit(ch))	//�ж��Ƿ�������0-9
			digits++;
		else if(ispunct(ch))	//�ж��Ƿ��Ǳ�� 
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
