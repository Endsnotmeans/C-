#include<iostream>
#include<new>

const int BUF=512;
const int N=5;
char buffer[BUF];
int main()
{
	using namespace std;
	double *pd1,*pd2;
	int i;
	cout<<"Calling new and placement new:\n";
	pd1=new double[N];
	pd2=new (buffer) double [N];			//��pd2����buffer�� 
	for(i=0;i<N;i++)
		pd2[i]=pd1[i]=1000+20.0*i;
	cout<<"Memory addresses: \n"<<" heap: "<<pd1
		<<" static: "<<(void *)buffer <<endl;		//��ӡbuffer�ĵ�ַ����void*��ǿ��ת������Ȼbuffer���ַ��� 
	cout<<" Memory contents:\n";
	for(i=0;i<N;i++)
	{
		cout<<pd1[i]<<" at "<<&pd1[i]<<"; ";		//pd1�ĵ�ַ��Զ�����ڶ�̬����Ķ��� 
		cout<<pd2[i]<<" at "<<&pd2[i]<<endl;		//��ӡpd2�ĵ�ַ����buffer��һ���� 
	}
	cout<<"\nCalling new and placement new a second time:\n";
	double *pd3,*pd4;
	pd3=new double[N];
	pd4=new (buffer) double[N];					//��д��pd2�ĵ�ַ 
	for(i=0;i<N;i++)
		pd4[i]=pd3[i]=1000+40.0*i;
	cout<<" Memory contents:\n";
	for(i=0;i<N;i++)
	{
		cout<<pd3[i]<<" at "<<&pd3[i]<<"; ";
		cout<<pd4[i]<<" at "<<&pd4[i]<<endl;
	}
	cout<<"\nCalling new and placement new a third time:\n";
	delete [] pd1;
	pd1=new double[N];
	pd2=new (buffer+N+sizeof(double)) double[N];		//pd2��pd4�������ͣ�delete��ɾ�����ģ�bufferָ�����Ǿ�̬�ڴ� 
	for(i=0;i<N;i++)
		pd2[i]=pd1[i]=1000+60.0*i;
	cout<<" Memory contents:\n";
	for(i=0;i<N;i++)
	{
		cout<<pd1[i]<<" at "<<&pd1[i]<<"; ";
		cout<<pd2[i]<<" at "<<&pd2[i]<<endl;
	}
	delete [] pd1;
	delete [] pd3;
	return 0;
}
