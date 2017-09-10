#include<iostream>
#include<string>
#include<cstring>
//字符数组和string对象对比 
int main()
{
	using namespace std;
	char charr1[20];
	char charr2[20]="jaguar";
	string str1;
	string str2="panther";
	
	str1=str2;
	strcpy(charr1,charr2);   //复制charr2到charr1 
	
	str1+=" paste";			//增加到str1末尾 
	strcat(charr1," juice");  //字符数组用函数加 
	
	int len1=str1.size() ;   	// 求字符数的类方法，size（） 
	int len2=strlen(charr1);    //求包含字符数的常规函数 
	
	cout<<"The string "<<str1<<" contains "
		<<len1<<" characters.\n";
	cout<<"The string "<<charr1<<" contains "
		<<len2<<" characters.\n";	
	return 0;
 } 
