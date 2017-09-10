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
	int Sales[12];
	int sum=0;
	for(int mon=0;mon<12;mon++)
	{
		cout<<"Enter sales number of "<<Month[mon]<<": ";
		cin>>Sales[mon];
		sum+=Sales[mon];
	}
	cout<<"The sales number of year is "<<sum<<endl;
	return 0;

 } 
