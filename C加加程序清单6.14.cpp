#include<iostream>
//�û��������clear��������
const int Max=5;
int main()
{
	using namespace std;
	int golf[Max];
	cout<<"Please enter your golf scores.\n";
	cout<<"You must enter "<<Max<<" rounds.\n";
	int i;
	for(i=0;i<Max;i++)
	{
		cout<<"round #"<<i+1<<": ";
		while(!(cin>>golf[i])){	//���ʽ�жϣ����cin������
		//�����൱�� cin>>golf[i]��û��while��������� 
			cin.clear();		//reset input
			//������ξͲ���������� 
			while(cin.get()!='\n')
				continue;		//�ų���������
			//��ȡ�س�֮ǰ���еĴ������� 
			cout<<"Please enter a number"; 
	 	} 
	 }
	double total=0.0;
	for(i=0;i<Max;i++)
		total+=golf[i];
	cout<<total/Max<<" =rounds\n";
	return 0;
}
	 
