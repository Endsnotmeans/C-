#include<iostream>
struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};						//这里有分号 
void structshow(box x); 
void structset(box *pt);
int main()
{
	using namespace std;
	box xx={"sx",5.1,2.3,10.5,};
	structshow(xx);
	structset(&xx);
	cout<<"volume= "<<xx.volume;
	return 0;	
}
void structshow(box x)
{	using namespace std;
	cout<<x.maker<<"\n";
	cout<<x.height <<"\n";
	cout<<x.width <<"\n";
	cout<<x.length<<"\n";
	cout<<x.volume<<"\n";
}

void structset(box *pt)
{
	pt->volume =pt->height *pt->length*pt->width;
}
