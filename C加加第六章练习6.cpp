#include<iostream>
//没有检查输入 
struct donation{
	char name[20];
	double money;
};

int main()
{
	using namespace std;
	int num;
	cout<<"Enter number of donators: ";
	cin>>num;
	donation *don=new donation[num];
	for(int i=0;i<num;i++)
	{	cin.get();
		cout<<"Enter donor's name: ";
		cin.getline(don[i].name,20);
		cout<<"Enter donor's money: ";
		cin>>don[i].money;
	}
	cout<<"Patrons";
	int cnt=0;
	for(int i=0;i<num;i++)
	{
		if(don[i].money>10000){
			cnt++;
			cout<<don[i].name<<endl;
			cout<<don[i].money<<endl;
		}
		if(cnt==0)
			cout<<"none";	
	}
		
	delete [] don; 
	return 	0;
}
