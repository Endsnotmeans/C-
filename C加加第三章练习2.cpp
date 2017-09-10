#include<iostream>
#include<cmath>


int main()
{
	using namespace std;
	const int foot2Inch=12;
	const float inch2metre=0.0254;
	const float kg2pound=2.2;
	int foot,inch,height;
	float pound,weight,BMI;
	
	cout<<"\aEnter ur height _foot\b\b\b\b\b\b";
	cin>>foot;
	cout<<"\aEnter ur height _inch\b\b\b\b\b\b";
	cin>>inch;
	cout<<"\aEnter ur weight ___pound\b\b\b\b\b\b";
	cin>>pound;
	
	inch=inch+foot2Inch*foot;
	height=inch2metre*inch;
	weight=pound/kg2pound;
	BMI=weight/pow(height,2);
	
	cout<<"Ur BMI is "<<BMI<<endl;
	
	return 0;	
}
