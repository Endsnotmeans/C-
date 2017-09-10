#include<iostream>
int main()
{
	using namespace std;
	unsigned int income;
	double tax;
	cout<<"Please enter your income:  ";
	while(cin>>income){
		if(income>35000)
			tax=4000+0.20*(income-35000);
		else if(income<=35000&&income>15000)
			tax=1000+0.15*(income-15000);
		else if(income<=15000&&income>5000)
			tax=0.10*(income-5000);
		else
			tax=0;
		cout<<tax<<endl;
		cout<<"continue to enter: ";
	}
	return 0; 
 } 
