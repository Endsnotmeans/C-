#include<iostream>
#include<fstream>
#include<cstdlib>  //������exit()
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
	
	inFile>>ch;					//����ch 
	while(inFile.good())		//��û�з����κδ���ʱTrue 
	{
		++count;
		inFile>>ch;				//ѭ�� 
	}  
	cout << count << " characters in " << filename << endl;
	
	inFile.close();
	return 0;		
 } 
