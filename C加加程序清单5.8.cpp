#include<iostream>

int main()
{
	using namespace std;
	cout<<"Plz enter 5 number: \n";
	double number;
	double sum=0.0;
	for(int i=1;i<=5;i++)
	{
		cout<<"value "<<i<<": ";
		cin>>number;
		sum+=number;
	}
	cout<<"Five exquisite choices indeed!";
	cout<<"They sum to "<<sum<<endl;
	cout<<"and average to "<<sum/5<<".\n";
	return 0;	
}
