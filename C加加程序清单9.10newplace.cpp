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
	pd2=new (buffer) double [N];			//把pd2放在buffer中 
	for(i=0;i<N;i++)
		pd2[i]=pd1[i]=1000+20.0*i;
	cout<<"Memory addresses: \n"<<" heap: "<<pd1
		<<" static: "<<(void *)buffer <<endl;		//打印buffer的地址，（void*）强制转换，不然buffer是字符串 
	cout<<" Memory contents:\n";
	for(i=0;i<N;i++)
	{
		cout<<pd1[i]<<" at "<<&pd1[i]<<"; ";		//pd1的地址很远，放在动态管理的堆中 
		cout<<pd2[i]<<" at "<<&pd2[i]<<endl;		//打印pd2的地址，和buffer是一样的 
	}
	cout<<"\nCalling new and placement new a second time:\n";
	double *pd3,*pd4;
	pd3=new double[N];
	pd4=new (buffer) double[N];					//重写了pd2的地址 
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
	pd2=new (buffer+N+sizeof(double)) double[N];		//pd2和pd4这种类型，delete是删不掉的，buffer指定的是静态内存 
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
