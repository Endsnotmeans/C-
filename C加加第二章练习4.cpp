#include<iostream>
using namespace std;
//���϶�ת���϶� 
int cToH(int n);
int main()
{	int n;
	cout<<"Plz enter a Celsius value:";
	cin>>n;
	cout<<n<<" degrees Celsius is "<<cToH(n)
	<<" degrees Fahrenheit"<<endl;
}

int cToH(int n){
	return 1.8*n+32.0;
}
	
