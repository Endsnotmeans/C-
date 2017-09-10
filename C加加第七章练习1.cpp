#include<iostream>
double haver(double,double);
int main()
{
	using namespace std;
	double a,b;
	cout<<"Enter the two num  and 0 to terminate: ";
	while((cin>>a>>b)&&a!=0&&b!=0)
	{
		haver(a,b);
		cout<<haver<<endl;
		cout<<"Enter:"; 
	 } 
	return 0;
}
double haver(double x,double y)
{
	 
	return 2.0*x*y/(x+y);
}
