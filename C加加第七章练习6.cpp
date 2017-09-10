#include<iostream>
int Fill_array(double ar[],int limit); //第二个参数 不要忘了加类型 
void Show_array(double ar[],int size);
void Reverse_array(double ar[],int size);
using namespace std;
int main()
{	int size;
	const int limit=10;
	double array[limit];
	size=Fill_array(array,limit);
	cout<<"U entered "<<size<<" number"<<endl; 
	Show_array(array,size);
	Reverse_array(array,size);
	Show_array(array,size);
	Reverse_array(array+1,size-2) ;
	Show_array(array+1,size-2);
	return 0;
}
int Fill_array(double ar[],int limit)	//不加limit会报错，一定要第一个函数返回实际数组长度 
{
	double temp;
	int i;
	for(i=0;i<limit;i++)
	{
		cout<<"Enter # "<<(i+1)<<": ";
		cin>>temp;
		if(!cin)
		{
			cout<<"end\n";
			break;
		}
		ar[i]=temp;
	}
	return i;	
}
void Show_array(double ar[],int size)
{
	for(int i=0;i<size;i++){
		cout<<ar[i]<<" ";
	}
	cout<<endl;
}
void Reverse_array(double ar[],int size)
{
	int i;
	double temp=0.0;
	for(i=0;i<size/2;i++)
	{
		temp=ar[i];
		ar[i]=ar[size-1-i];
		ar[size-1-i]=temp;
	}
}
