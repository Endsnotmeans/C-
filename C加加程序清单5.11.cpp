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
	//strcmp��������0������true���ַ�����++ 
	//�ַ���������><=�Ƚϣ������ַ����ԣ��ַ����Ƚ�ѽ��strcmp 
	{
		cout<<word<<endl;
		word[0]=ch;
	}
	cout<<"After loop ends,word is "<<word<<endl;
	return 0;
	//��ʵ������ʺ���whileѭ�� 
}
