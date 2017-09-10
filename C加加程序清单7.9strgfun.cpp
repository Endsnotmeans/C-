#include<iostream>
//字符串与函数
//char数组和字符串
int c_in_str(const char* str,char ch);
int main()
{
	using namespace std;
	char mmm[15]="minimum";
	char *wail="ululate";
	
	int ms=c_in_str(mmm,'m');
	int us=c_in_str(wail,'u');
	cout<<ms<<" m characters in "<<mmm<<endl;
	cout<<us<<" u characters in "<<wail<<endl;
	return 0;
 } 
 
 int c_in_str(const char* str,char ch)
 {
 	int count=0;
 	
 	while(*str)			//*str=‘0’则跳出循环 
 	{
 		if(*str==ch)
 			count++;
 		str++;	       //指针++ 移动到下一个 
	 }
	 return count;
 }
