#include<iostream>
#include<cstring>
//5.11 5.12
int main()
{
	using namespace std;
//	char word[5]="?ate";
	string word="?ate"; 
	
	
//	for(char ch='a';strcmp(word,"mate");ch++)
	for(char ch='a';word!="mate";ch++)
	//strcmp，不等于0，就是true，字符可以++ 
	//字符串不能用><=比较，不过字符可以，字符串比较呀用strcmp 
	{
		cout<<word<<endl;
		word[0]=ch;
	}
	cout<<"After loop ends,word is "<<word<<endl;
	return 0;
	//其实这个更适合用while循环 
}
