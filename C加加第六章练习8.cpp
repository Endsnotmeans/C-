#include<iostream>
#include<fstream>
#include<cstdlib>  //里面有exit()
const int SIZE=60;
int main()
{
	using namespace std;
	char filename[SIZE];
	char ch;
	ifstream inFile;
	
	cout<<"Enter name of data file: ";
	cin.getline(filename,SIZE);
	inFile.open(filename);
	if(!inFile.is_open() )
	{
		cout<<"Could not open the file "<<filename<<endl;
		cout<<"Program teminating.\n";
		exit(EXIT_FAILURE);
	}
	
	int count=0;
	
	inFile>>ch;					//读入ch 
	while(inFile.good())		//在没有发生任何错误时True 
	{
		++count;
		inFile>>ch;				//循环 
	}  
	cout << count << " characters in " << filename << endl;
	
	inFile.close();
	return 0;		
 } 
