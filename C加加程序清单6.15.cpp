#include<iostream>
#include<fstream>
//�ļ�I/O��д�뵽�ı��ļ� 
//��Ļ�����ͬʱ��ִ���ļ�Ŀ¼��������һ��carinfo.txt���ļ�������һ�� 
int main()
{
	using namespace std;
	
	char automobile[50];
	int year;
	double a_price;
	double d_price;
	
	ofstream outFile;	//����һ������Ϊ����������coutһ���� 
	outFile.open("carinfo.txt");
	
	cout<<"Enter the make and model of automobile: ";
	cin.getline(automobile,50);
	cout<<"Enter the model year: ";
	cin>>year;
	cout<<"Enter the original asking price: ";
	cin>>a_price;
	d_price=0.913*a_price;
	
	cout<<fixed;
	cout.precision(2);           //�����������Ϊ2 
	cout.setf(ios_base::showpoint);   //����С������ĩβ��0Ҳ��� 
	cout<<"Make and model: "<<automobile<<endl;
	cout<<"Year: "<<year<<endl;
	cout<<"Was asking $"<<a_price<<endl;
	cout<<"Now asking $"<<d_price<<endl;
	
	outFile<<fixed;	
	outFile.precision(2) ;           
	outFile.setf(ios_base::showpoint);   
	outFile<<"Make and model: "<<automobile<<endl;
	outFile<<"Year: "<<year<<endl;
	outFile<<"Was asking $"<<a_price<<endl;
	outFile<<"Now asking $"<<d_price<<endl;
	
	outFile.close();	//�رգ�����Ҫ���ļ���Ϊ���� 
	return 0;	 
 } 
