#include<iostream>

int main(){
	using namespace std;
	int i;
	int sum=0;
	cout<<"Enter a integer:";
	cin>>i;
	while(i!=0){
		sum+=i;
		cout<<"Sum so far is "<<sum<<endl;
		cout<<"Enter a integer:";
		cin>>i;		
	};
	cout<<"Done,you entered 0"<<endl;
}
