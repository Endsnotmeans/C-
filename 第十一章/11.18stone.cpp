#include<iostream>
using std::cout;
#include "stonewt.h"

void display(const Stonewt& st,int n);

int main(int argc, char** argv) {
	Stonewt incognito=275;  //����ʽ�����
	Stonewt wolfe(285.7);
	Stonewt taft(21,8) ;
	
	cout<<" The celebrity weighted ";
	incognito.show_stn() ;
	cout<<" The detective weighted ";
	wolfe.show_stn() ;
	cout<<" The President weighted ";
	taft.show_lbs() ;
	incognito=276.8;		//��constructorֻ��һ������ʱ����ʽ����constructor 
	taft=325;				//�൱��taft=Stonewt��325��
	cout<<" After dinner,the celebrity weighted ";
	incognito.show_stn() ;
	cout<<" After dinner,The President weighted ";
	taft.show_lbs() ;
	display(taft,2);
	cout<<" The wrestler weighted even more.\n";
	display(422,2);		//display���ܵĵ�һ��������Stonewt�����
	//����������Stonewt��int����422תΪStonewt���ͣ�û�ҵ�
	//Ȼ��Ѱ��Stone��double��������Ȱ�422תdouble��תStonewt 
	cout<<"No stone left unearned\n";
	//ת���������Բ���
	Stonewt poppins(9,2.8);
	double p_wt=poppins;     //��ʽ����ת��������double=Stone�� 
	cout<<"Convert to double => ";
	cout<<"Poppins: "<<p_wt<<" pounds.\n";
	cout<<"Convert to int=> " ;
	cout<<"Poppins: "<<int(poppins)<<" pounds.\n";   //��ʽʹ��ת������
	//int��poppins���� ��int��poppins���� 
	return 0;
}
void display(const Stonewt& st,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Wow! ";
		st.show_stn() ;
	}
}
