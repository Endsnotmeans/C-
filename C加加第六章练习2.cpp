#include<iostream>

const int Max=10;
int main()
{
	using namespace std;
	double donation[Max];
	cout<<"Please enter your donation number.\n";
	cout<<"You may enter up to "<<Max
		<<" number any non-num will cause program to terminate.\n";
	cout<<"#1: ";
	int i=0;
	while(i<Max&&cin>>donation[i]){
		if(++i<Max)
			cout<<"#"<<i+1<<": ";
	}
	double sum=0.0;
	for(int j=0;j<Max;j++)		//遍历的时候从0开始= =！这也能错 
		sum+=donation[j];
	double aver;
	aver=sum/i;
	int cnt=0;
	for(int i=0;i<Max;i++){
		if(donation[i]>aver)
		++cnt;
	}
	cout<<"the num above aver "<<aver<<" is "<<cnt<<endl;
	return 0;	
 } 
