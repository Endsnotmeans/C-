#include<iostream>

int main()
{
	using namespace std;
	const char *Month[12]=
	{
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"Decenber"		
	};
	int Sales[3][12];
	int sum[3]={0,};
	for(int yr=0;yr<3;yr++)
	{	cout<<"year "<<(yr+1)<<endl;
		for(int mon=0;mon<12;mon++)
		{
			cout<<"Enter sales number of "<<Month[mon]<<": ";
			cin>>Sales[yr][mon];
			sum[yr]+=Sales[yr][mon];
		}
		cout<<"The sales number of year"<<(yr+1)<<" is "<<sum[yr]<<endl;
	}
	double total;
	total=sum[0]+sum[1]+sum[2];
	
	return 0;

 } 
