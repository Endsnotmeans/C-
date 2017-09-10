#include<iostream>
//用户输入错了clear继续输入
const int Max=5;
int main()
{
	using namespace std;
	int golf[Max];
	cout<<"Please enter your golf scores.\n";
	cout<<"You must enter "<<Max<<" rounds.\n";
	int i;
	for(i=0;i<Max;i++)
	{
		cout<<"round #"<<i+1<<": ";
		while(!(cin>>golf[i])){	//表达式判断，如果cin读入了
		//这句就相当于 cin>>golf[i]，没有while括号里的了 
			cin.clear();		//reset input
			//不输这段就不会继续输入 
			while(cin.get()!='\n')
				continue;		//排除错误输入
			//读取回车之前所有的错误输入 
			cout<<"Please enter a number"; 
	 	} 
	 }
	double total=0.0;
	for(i=0;i<Max;i++)
		total+=golf[i];
	cout<<total/Max<<" =rounds\n";
	return 0;
}
	 
