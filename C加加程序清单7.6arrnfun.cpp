#include<iostream>
//����ͺ���,��������Ԫ�ص�ַ�����鳤�ȴ��ݲ��� 
//arr[i]==*(ar+i) 
//&arr[i]==ar+I
const int ArSize=8;
int sum_arr(int arr[],int n);
int main()
{
	int cookies[ArSize]={1,2,4,8,16,32,64,128};
	std::cout<<cookies<<" =array address, ";
	//��������������Ԫ�ص�ַ 
	std::cout<<sizeof cookies<<" =sizeof cookies\n";
	//sizeof�����ȼ��ڶ��� ��Ŀ����������Բ�������
	int sum=sum_arr(cookies,ArSize);
	std::cout<<"Total cookies eaten: "<<sum<<std::endl;
	sum=sum_arr(cookies,3) ;
	std::cout<<"First 3 eaters ate: "<<sum<<" cookies.\n";
	sum=sum_arr(cookies+4,4);
	//cookie+4�������5��Ԫ�صĵ�ַ���������ʼ4��Ԫ��Ϊһ����������� 
	std::cout<<"Last four eaters ate: "<<sum<<" cookies.\n";
	return 0;
}

int sum_arr(int arr[],int n)
//��Ҫ��ͼ��sum_arr(int arr[n])�����ݲ��� 
{
	int total=0;
	std::cout<<arr<<" =arr, ";
	std::cout<<sizeof arr<<" =sizeof arr\n";
	for(int i=0;i<n;i++)
		total=total+arr[i];
	return total;
}
