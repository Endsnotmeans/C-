#include<iostream>
using namespace std;
//���ʱ�� 
void time(int,int);

int main()
{	int h,m;
	cout<<"Enter the number of hours: ";
	cin>>h;
	cout<<"Enter the number of minutes: ";
	cin>>m;
	time(h,m);
	return 0;
}

void time(int h,int m){
	cout<<"Time: "<<h<<":"<<m<<endl;
}
