#include<iostream>
using namespace std;
//����ת���ĵ�λ 
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
	
