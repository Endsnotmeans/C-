#include<iostream>
#include<fstream>
//文件I/O，写入到文本文件 
//屏幕输出的同时，执行文件目录中生成了一个carinfo.txt的文件，内容一样 
int main()
{
	using namespace std;
	
	char automobile[50];
	int year;
	double a_price;
	double d_price;
	
	ofstream outFile;	//声明一个对象为其命名，和cout一样用 
	outFile.open("carinfo.txt");
	
	cout<<"Enter the make and model of automobile: ";
	cin.getline(automobile,50);
	cout<<"Enter the model year: ";
	cin>>year;
	cout<<"Enter the original asking price: ";
	cin>>a_price;
	d_price=0.913*a_price;
	
	cout<<fixed;
	cout.precision(2);           //设置输出精度为2 
	cout.setf(ios_base::showpoint);   //设置小数部分末尾是0也输出 
	cout<<"Make and model: "<<automobile<<endl;
	cout<<"Year: "<<year<<endl;
	cout<<"Was asking $"<<a_price<<endl;
	cout<<"Now asking $"<<d_price<<endl;
	
	outFile<<fixed;	
	outFile.precision(2) ;           
	outFile.setf(ios_base::showpoint);   
	outFile<<"Make and model: "<<automobile<<endl;
	outFile<<"Year: "<<year<<endl;
	outFile<<"Was asking $"<<a_price<<endl;
	outFile<<"Now asking $"<<d_price<<endl;
	
	outFile.close();	//关闭，不需要填文件名为参数 
	return 0;	 
 } 
