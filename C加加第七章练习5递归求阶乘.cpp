#include<iostream>
int factor(int n);

int main()
{	using namespace std;
	int n;
	cout<<"Enter the number: ";
	while(cin>>n){
		if(n==0||n==1)
		cout<<"n's factor=1\n";
		else{
			n=factor(n);
			cout<<"n's factor= "<<n<<endl;
		}
		cout<<"Enter next number: ";
	}
	return 0;
}
int factor(int n)
{	
	int result=1;
	if(n>1)
		result=n*factor(n-1);
	return result;
}
