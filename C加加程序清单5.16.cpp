#include<iostream>
//ѭ�����ı����� 
int main()
{
	using namespace std;
	char ch;
	int count=0;
	cout<<"Enter characters;enter # to quit :\n";
	cin>>ch;	//ѭ��ǰ�����룬��ֹ��һ���ַ�����#
	while(ch!='#')
	{
		cout<<ch;
		++count;  //��ʼֵ��1 
		cin>>ch;	//cin�����⣬1�����Կո�ͻ��з���
		//2ֻ���û����س����ŷ��͸�����#�ź��ܼ�����
		//cin>>ch�ĳ�cin.get��ch�����Խ���ո����������	
	} 
	cout<<endl<<count<<" characters read\n";
}
