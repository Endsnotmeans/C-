#include<iostream>
#include<cstring>
int main()
{
	using namespace std;
	char animal[20]="bear";
	const char *bird="wren";
	char *ps;
	
	cout<<animal<<" and ";
	cout<<bird<<"\n";
	//���д cout<<ps<<"\n"������������psû�и�ֵ
	
	cout<<"Enter a kind of animal: ";
	cin>>animal; //����cin>>ps��psû����ʼ�������Բ����������ܻ����Ÿ�λ��
	
	ps=animal;    //ָ�븴�ƣ������ַ���ָ����ͬһ����ַ���ַ�������һ�� 
	cout<<ps<<"s!\n";
	cout<<"Before using strcpy():\n";
	cout<<animal<<" at "<<(int*)animal<<endl;  //animal�ĵ�ַ 
	cout<<ps<<" at "<<(int*)ps<<endl; 
	
	ps=new char[strlen(animal)+1]; //�����´洢�ռ䣬��С������ֵ��1���ַ�
	strcpy(ps,animal);			   //����string���´洢�ռ䣬������ps=animal 
	cout<<"After using strcpy():\n";
	cout<<animal<<" at "<<(int*)animal<<endl;  
	cout<<ps<<" at "<<(int*)ps<<endl; 
	delete [] ps;
	return 0;
	
} 
