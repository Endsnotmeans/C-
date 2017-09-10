#include<iostream>
#include<ctime>  //包含 clock()函数和clock_t类型

//等待一段时间，编写延时循环 
int main()
{
	using namespace std;
	cout<<"Enter the delay time,in seconds: ";
	float secs;
	cin>>secs;
	clock_t delay=secs*CLOCKS_PER_SEC;
	//CLOCK_PER_SEC是个常量，把秒转化为系统时间单位
	cout<<"starting\a\n";
	clock_t start=clock() ;
	while(clock()-start<delay)
		;				//什么也不做 
	cout<<"done \a\n"; 
	return 0;
 } 
