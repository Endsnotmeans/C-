#include<iostream>
#include<ctime>  //���� clock()������clock_t����

//�ȴ�һ��ʱ�䣬��д��ʱѭ�� 
int main()
{
	using namespace std;
	cout<<"Enter the delay time,in seconds: ";
	float secs;
	cin>>secs;
	clock_t delay=secs*CLOCKS_PER_SEC;
	//CLOCK_PER_SEC�Ǹ�����������ת��Ϊϵͳʱ�䵥λ
	cout<<"starting\a\n";
	clock_t start=clock() ;
	while(clock()-start<delay)
		;				//ʲôҲ���� 
	cout<<"done \a\n"; 
	return 0;
 } 
