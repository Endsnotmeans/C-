#include<iostream>
//输入5条鱼的重量 
const int Max=5;
int main()
{
	using namespace std;
	double fish[Max];
	cout<<"Please enter the weights of your fish.\n";
	cout<<"You may enter up to "<<Max
		<<" fish <q to terminate.\n";
	cout<<"fish #1: ";
	int i=0;
	//小于5条才输入 
	while(i<Max&&cin>>fish[i]){
	//如果输入的不是数字，cin为false，直接不进入循环 
		if(++i<Max)
			cout<<"fish #"<<i+1<<": ";
	}
	double total=0.0;
	for(int j=0;j<i;j++)
		total+=fish[j];
	if(i==0)
		cout<<"No fish\n";
	else
		cout<<total/i<<" = average weight of "
			<<i<<" fish\n";
	cout<<"Done.\n";
	return 0;
}
