#include<iostream>
//使用new创建动态结构 
struct inflatable
{
	char name[20];
	float volume;
	double price;
};

int main(){
	using namespace std;
	inflatable *ps=new inflatable; //分配内存给结构
	cout<<"Enter name of inflatable item: ";
	cin.get(ps->name ,20);      //新结构没命名，不能用xx.name
	//标识符是指针，使用箭头操作符，标识符是结构名，用句点操作符
	cout<<"Enter volume in cubic feet: ";
	cin>>(*ps).volume;		//第二种方法，能用句点操作符 
	cout<<"Enter price: $ ";
	cin>>ps->price ;
	
	cout<<"Name: "<<(*ps).name<<endl;
	cout<<"Volume: "<<ps->volume <<" cubic feet\n";
	cout<<"Price: $"<<ps->price <<endl;
	delete ps;
	return 0;
} 
