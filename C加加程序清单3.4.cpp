#include<iostream>
using namespace std;

//int main()
//{
//	int chest=42;
//	int waist=42;
//	int inseam=42;
//	
//	cout<<"chest= "<<chest<<" (decimal)"<<endl;
//	cout<<hex;   //ʮ�����Ʊ�ʶ�� 
//	cout<<"waist= "<<waist<<" hexadecimal"<<endl;
//	cout<<oct;   // �˽��Ʊ�ʶ�� 
//	cout<<"inseam= "<<inseam<<" (octal)"<<endl;
//	return 0;
// } 
 
 int main()
{	int chest=42;
	int waist=0x42;
	int inseam=042;
	cout<<"chest= "<<chest<<" (in decimal������)"<<endl;
	cout<<"waist= "<<waist<<"( in hexadecimalʮ������)"<<endl;
	cout<<"inseam= "<<inseam<<" (in octal�˽���)"<<endl;
	return 0;
}
 

