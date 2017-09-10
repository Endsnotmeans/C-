#include<iostream>
//返回字符串的函数
char *buildstr(char c,int n) ;
int main()
{
	using namespace std;
	int times;
	char ch;
	
	cout<<"Enter a character: ";
	cin>>ch;
	cout<<"Enter an integer: ";
	cin>>times;
	char *ps=buildstr(ch,times);
	cout<<ps<<endl;
	delete [] ps;
	ps=buildstr('+',20);
	cout<<ps<<"=Done="<<ps<<endl;
	delete [] ps;
	return 0;	
}

char *buildstr(char c,int n) 
{
	char *pstr=new char[n+1];		//n+1字符空间不是n 
	pstr[n]='\0';
	while(n-->0)
		pstr[n]=c;
	return pstr;
}
