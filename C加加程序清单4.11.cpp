#include<iostream>

struct inflatable
{
	char name[20];	//string类也是可以的，用std::string name； 
	float volume;
	double price;	
 } ;
 //一个struct可以赋值给另外一个同类型struct，即使里面包含数组 
 int main()
 {
 	using namespace std;
 	inflatable quest=
 	{
 		"Glorious Gloria",  //注意逗号。也可以放同一行 
 		1.88,
 		29.99
	 };						//注意分号 
	inflatable pal=
	 {
	 	"Audacious Arthur",
	 	3.12,
	 	32.99
	 };
	 
	cout<<"Expand your quest list with "<<quest.name;
	cout<<" and "<<pal.name<<"!\n";
	cout<<"You can have both for $";
	cout<<quest.price+pal.price<<"!\n";
	return 0; 
 }
