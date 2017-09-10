#include<iostream>
//有点笨就是了 
int main(){
	using namespace std;
	int n;
	cout<<"Enter number of rows: ";
	cin>>n;
	char a[n][n];
	for(int r=0;r<n;r++){
		for(int c=0;c<n;c++)
		{
			a[r][c]='*';
		}
	}
	for(int r=0;r<n;r++){
		for(int c=0;c<n;c++)
		{
			if(c<n-r-1)
			a[r][c]='.';
		}
	}
	for(int r=0;r<n;r++){
		for(int c=0;c<n;c++)
		{
			cout<<a[r][c];
		}
		cout<<endl;
	}
	return 0;
}
