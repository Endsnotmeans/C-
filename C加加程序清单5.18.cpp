#include<iostream>
//�ļ�β���� EOF
//����ÿ�ζ�ȡһ���ַ���֪������EOF�ĳ������� 
int main()
{
	using namespace std;
	char ch;
	int count=0;
//	cin.get(ch);
//	while(cin.fail()==false )   //test for EOF
//	//��������while����cin��fail������ 
//	{
//		cout<<ch;
//		++count;
//		cin.get(ch);
//	}
	//�ڶ��ַ�������cin.get��ch���ķ���ֵcin����ת��Ϊboolֵ 
	while(cin.get(ch))
	{
		cout<<ch;
		++count;
	}
	cout<<endl<<count<<" characters read\n";
	return 0;
	//��ctrl+z��ģ��EOF���� 
 } 
