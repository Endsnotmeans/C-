#include<iostream>
//������û�о��ȡ�floatֻ�ܱ�ʾǰ6��7λ�������������Ӧ����1 
int main()
{
	using namespace std;
	float a=2.34E+22f; //ĩβf��ʾΪ���㳣����F��ʾlong double����
	//��Ϊ�����Ĭ�ϰ���������double�� 
	float b=a+1.0f;
	
	cout<<"a= "<<a<<endl;
	cout<<"b-a= "<<b-a<<endl;
	return 0;
 } 
