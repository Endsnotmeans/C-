#include<iostream>

int main(){
	using namespace std;
	int a,b;
	int sum=0;
	cout<<"Enter 2 integer:";
	cin>>a;
	cin>>b;
	for(int i=a;i<=b;i++)
	{
		sum+=i;	
	}
	cout<<"Sum between a and b: "<<sum;
	return 0;	
}
