#include<iostream>

int datain(int ar[],int size);
void datashow(int ar[],int size);
double aver(int ar[],int size);
using namespace std;
int main()
{	int golf[10];
	int size=datain(golf,10);
	datashow(golf,size);
	double average;
	average=aver(golf,size);
	cout<<average<<endl;
	return 0;	
} 

int datain(int ar[],int size)
{	unsigned int temp;
	int i;
	for(i=0;i<10;i++)
	{
		cout<<"Enter golf result,max=10,press # to terminate: ";
		cout<<"Enter # "<<(i+1)<<": ";
		cin>>temp;
		if(!cin)
		{
			cin.clear();
			while(cin.get()!='\n')
				continue;
			cout<<"Bad input\n";
			break;
		}
		ar[i]=temp;
	}
	return i;	
}
void datashow(int ar[],int size)
{
	cout<<"golf: ";
	for(int i=0;i<size;i++){
		cout<<ar[i]<<" ";
	}
	cout<<endl;
}
double aver(int ar[],int size)
{
	double sum=0;
	for(int i=0;i<size;i++){
		sum+=ar[i];
	}
	return sum/size;
	
}

