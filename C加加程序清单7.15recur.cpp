#include<iostream>
//函数的递归调用
void countdown(int n);

int main()
{
	countdown(4);
	return 0;
 } 
 
 void countdown(int n)
 {
 	using namespace std;
 	cout<<"Counting down ..."<<n<<endl;
 	if(n>0)
 		countdown(n-1);
 	//调用结束后，沿进入的路径返回 
 	cout<<n<<": Boom!\n";
 }
