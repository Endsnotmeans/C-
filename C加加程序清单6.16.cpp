#include<iostream>
#include<fstream>
#include<cstdlib>  //里面有exit()
const int SIZE=60;
int main()
{
	using namespace std;
	char filename[SIZE];
	ifstream inFile;
	
	cout<<"Enter name of data file: ";
	cin.getline(filename,SIZE);
	inFile.open(filename);
	//目录下有个scores.txt 最后一个数字输入后也要按回车，不然不读最后一个数 
	if(!inFile.is_open() )
	{
		cout<<"Could not open the file "<<filename<<endl;
		cout<<"Program teminating.\n";
		exit(EXIT_FAILURE);
	}
	double value;
	double sum=0.0;
	int count=0;
	
	inFile>>value;
	while(inFile.good())		//在没有发生任何错误时True 
	{
		++count;
		sum+=value;
		inFile>>value;
	}  
	if(inFile.eof() )
		cout<<"End of file reached.\n";
	else if(inFile.fail() )		//读到了数字之外的格式 
		cout<<"Input terminated by data mismatch.\n";
	else
		cout<<"Input terminated for unknown reason.\n";
	if(count==0)
		cout<<"No data processed.\n";
	else
	{
		cout<<"Items read: "<<count<<endl;
		cout<<"Sum: "<<sum<<endl;
		cout<<"Average: "<<sum/count<<endl;
	}
	inFile.close();
	return 0;		
 } 
