#include<iostream>
using std::cout;
#include "stonewt.h"

void display(const Stonewt& st,int n);

int main(int argc, char** argv) {
	Stonewt incognito=275;  //这个词叫匿名
	Stonewt wolfe(285.7);
	Stonewt taft(21,8) ;
	
	cout<<" The celebrity weighted ";
	incognito.show_stn() ;
	cout<<" The detective weighted ";
	wolfe.show_stn() ;
	cout<<" The President weighted ";
	taft.show_lbs() ;
	incognito=276.8;		//当constructor只有一个参数时，隐式调用constructor 
	taft=325;				//相当于taft=Stonewt（325）
	cout<<" After dinner,the celebrity weighted ";
	incognito.show_stn() ;
	cout<<" After dinner,The President weighted ";
	taft.show_lbs() ;
	display(taft,2);
	cout<<" The wrestler weighted even more.\n";
	display(422,2);		//display接受的第一个参数是Stonewt类对象
	//编译器先找Stonewt（int）把422转为Stonewt类型，没找到
	//然后寻找Stone（double），因此先把422转double再转Stonewt 
	cout<<"No stone left unearned\n";
	//转换函数测试部分
	Stonewt poppins(9,2.8);
	double p_wt=poppins;     //隐式调用转换函数，double=Stone类 
	cout<<"Convert to double => ";
	cout<<"Poppins: "<<p_wt<<" pounds.\n";
	cout<<"Convert to int=> " ;
	cout<<"Poppins: "<<int(poppins)<<" pounds.\n";   //显式使用转换函数
	//int（poppins）和 （int）poppins都行 
	return 0;
}
void display(const Stonewt& st,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Wow! ";
		st.show_stn() ;
	}
}
