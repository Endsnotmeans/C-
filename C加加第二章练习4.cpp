#include<iostream>
using namespace std;
//摄氏度转华氏度 
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
	
