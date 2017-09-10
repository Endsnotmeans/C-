#include<iostream>
//数组和函数,用数组首元素地址和数组长度传递参数 
//arr[i]==*(ar+i) 
//&arr[i]==ar+I
const int ArSize=8;
int sum_arr(int arr[],int n);
int main()
{
	int cookies[ArSize]={1,2,4,8,16,32,64,128};
	std::cout<<cookies<<" =array address, ";
	//数组名即数组首元素地址 
	std::cout<<sizeof cookies<<" =sizeof cookies\n";
	//sizeof是优先级第二的 单目运算符，可以不加括号
	int sum=sum_arr(cookies,ArSize);
	std::cout<<"Total cookies eaten: "<<sum<<std::endl;
	sum=sum_arr(cookies,3) ;
	std::cout<<"First 3 eaters ate: "<<sum<<" cookies.\n";
	sum=sum_arr(cookies+4,4);
	//cookie+4即数组第5个元素的地址，从这个开始4个元素为一个新数组计算 
	std::cout<<"Last four eaters ate: "<<sum<<" cookies.\n";
	return 0;
}

int sum_arr(int arr[],int n)
//不要试图用sum_arr(int arr[n])来传递参数 
{
	int total=0;
	std::cout<<arr<<" =arr, ";
	std::cout<<sizeof arr<<" =sizeof arr\n";
	for(int i=0;i<n;i++)
		total=total+arr[i];
	return total;
}
