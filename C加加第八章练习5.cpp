#include <iostream>

template <class T>
T max5(T ar[]) 
{
	int n;
	T max=ar[0];
	for(n=1;n<5;n++)
		if(ar[n]>max)
			max=ar[n];
	return max;
}

int main()
{
	using namespace std;
	double a[5]={-1.1,75.1,44.7,-49,11.7};
	int b[5]={1,3,5,31,7};
	double maxd;
	int maxi;
	maxd=max5(a);
	maxi=max5(b);
	cout<<maxd<<endl;
	cout<<maxi<<endl;
	return 0;
}
