#include<iostream>
//ʹ��new������̬�ṹ 
struct inflatable
{
	char name[20];
	float volume;
	double price;
};

int main(){
	using namespace std;
	inflatable *ps=new inflatable; //�����ڴ���ṹ
	cout<<"Enter name of inflatable item: ";
	cin.get(ps->name ,20);      //�½ṹû������������xx.name
	//��ʶ����ָ�룬ʹ�ü�ͷ����������ʶ���ǽṹ�����þ�������
	cout<<"Enter volume in cubic feet: ";
	cin>>(*ps).volume;		//�ڶ��ַ��������þ������� 
	cout<<"Enter price: $ ";
	cin>>ps->price ;
	
	cout<<"Name: "<<(*ps).name<<endl;
	cout<<"Volume: "<<ps->volume <<" cubic feet\n";
	cout<<"Price: $"<<ps->price <<endl;
	delete ps;
	return 0;
} 
