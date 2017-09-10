#include<iostream>
using namespace std;
//光年转天文单位 
double lyToAu(double n);
int main()
{	double n;
	cout<<"Plz enter the number of light years:";
	cin>>n;
	cout<<n<<" light years = "<<lyToAu(n)
	<<" astronomical units"<<endl;
}

double lyToAu(double n){
	return 63240*n;
}
	
