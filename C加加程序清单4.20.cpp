#include<iostream>
#include<cstring>
int main()
{
	using namespace std;
	char animal[20]="bear";
	const char *bird="wren";
	char *ps;
	
	cout<<animal<<" and ";
	cout<<bird<<"\n";
	//如果写 cout<<ps<<"\n"则可能引起错误，ps没有赋值
	
	cout<<"Enter a kind of animal: ";
	cin>>animal; //不能cin>>ps，ps没被初始化，电脑不造存哪里，可能会随便放个位置
	
	ps=animal;    //指针复制，两个字符串指向了同一个地址，字符串还是一个 
	cout<<ps<<"s!\n";
	cout<<"Before using strcpy():\n";
	cout<<animal<<" at "<<(int*)animal<<endl;  //animal的地址 
	cout<<ps<<" at "<<(int*)ps<<endl; 
	
	ps=new char[strlen(animal)+1]; //分配新存储空间，大小是输入值加1空字符
	strcpy(ps,animal);			   //复制string到新存储空间，区别于ps=animal 
	cout<<"After using strcpy():\n";
	cout<<animal<<" at "<<(int*)animal<<endl;  
	cout<<ps<<" at "<<(int*)ps<<endl; 
	delete [] ps;
	return 0;
	
} 
