#include<iostream>
//ʹ��getline������ȡһ���ַ�������Ϊ��cin���ո��ͣ�� 
int main()
{
	using namespace std;
	const int ArSize=20;
	char name[ArSize];
	char dessert[ArSize];
	
	cout<<"Enter your name:\n";
	cin.getline(name,ArSize);  //����������һ�������������ڶ������ַ���
	//���ܴ�ArSize-1����Ҫ����ַ� 
	cout<<"Enter your favorite dessert:\n";
	cin.getline(dessert,ArSize);
	cout<<"I have some delicious "<<dessert;
	cout<<" for you "<<name<<".\n";
	return 0; 
}
