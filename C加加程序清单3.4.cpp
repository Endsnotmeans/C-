#include<iostream>
using namespace std;

//int main()
//{
//	int chest=42;
//	int waist=42;
//	int inseam=42;
//	
//	cout<<"chest= "<<chest<<" (decimal)"<<endl;
//	cout<<hex;   //十六进制标识符 
//	cout<<"waist= "<<waist<<" hexadecimal"<<endl;
//	cout<<oct;   // 八进制标识符 
//	cout<<"inseam= "<<inseam<<" (octal)"<<endl;
//	return 0;
// } 
 
 int main()
{	int chest=42;
	int waist=0x42;
	int inseam=042;
	cout<<"chest= "<<chest<<" (in decimal二进制)"<<endl;
	cout<<"waist= "<<waist<<"( in hexadecimal十六进制)"<<endl;
	cout<<"inseam= "<<inseam<<" (in octal八进制)"<<endl;
	return 0;
}
 

